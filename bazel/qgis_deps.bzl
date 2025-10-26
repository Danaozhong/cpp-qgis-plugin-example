def _path_join(base: str, suffix):
    if not base:
        return ""
    return base.rstrip("/\\") + "/" + suffix

def _first_existing_path(repo_ctx, candidates):
    for candidate in candidates:
        if not candidate:
            continue
        p = repo_ctx.path(candidate)
        if p.exists:
            return str(p)
    return ""

def _is_windows(os_name):
    return "windows" in os_name.lower()

def _is_macos(os_name):
    return "mac" in os_name.lower()

def _parent_qgis_include_dir(repo_ctx, include_dir):
    include_dir_norm = include_dir.replace("\\", "/")
    if include_dir_norm.endswith("/qgis"):
        candidate = include_dir_norm.rsplit("/qgis", 1)[0]
        if repo_ctx.path(candidate).exists:
            return candidate
    return include_dir

def _fail_with_hints(os_name):
    fail("\n".join([
        "Could not find QGIS developer files for {}.".format(os_name),
        "Set one of these environment variables (for Bazel: --repo_env=KEY=VALUE):",
        "  QGIS_INCLUDE_DIR + QGIS_LIB_DIR",
        "  QGIS_PREFIX_PATH",
        "  QGIS_BUILD_PATH",
        "  QGIS_MAC_PATH (macOS)",
        "  OSGEO4W_ROOT (Windows)",
        "Bazel does not use repository-local QGIS paths, but it does fall back to system-installed locations.",
    ]))

def _linux_repo(repo_ctx, env):
    prefix = env.get("QGIS_PREFIX_PATH", "")
    build_path = env.get("QGIS_BUILD_PATH", "")
    include_override = env.get("QGIS_INCLUDE_DIR", "")
    lib_override = env.get("QGIS_LIB_DIR", "")
    lib_dir_env = env.get("LIB_DIR", "")

    include_dir = _first_existing_path(repo_ctx, [
        include_override,
        _path_join(prefix, "include/qgis"),
        _path_join(lib_dir_env, "include/qgis"),
        _path_join(build_path, "include/qgis"),
        "/usr/include/qgis",
        "/usr/local/include/qgis",
    ])

    lib_dir = _first_existing_path(repo_ctx, [
        lib_override,
        _path_join(prefix, "lib"),
        _path_join(build_path, "output/lib"),
        _path_join(build_path, "lib"),
        _path_join(lib_dir_env, "lib"),
        "/usr/lib64",
        "/usr/lib",
        "/usr/local/lib",
    ])

    if not include_dir or not lib_dir:
        _fail_with_hints("linux")

    include_root = _parent_qgis_include_dir(repo_ctx, include_dir)

    repo_ctx.symlink(include_root, "include_root")
    repo_ctx.symlink(include_dir, "include_qgis")
    repo_ctx.symlink(lib_dir, "lib")

    repo_ctx.file("BUILD.bazel", """
load("@rules_cc//cc:cc_import.bzl", "cc_import")
load("@rules_cc//cc:cc_library.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "qgis_headers",
    hdrs = glob([
        "include_root/**/*.h",
        "include_root/**/*.hpp",
        "include_qgis/**/*.h",
        "include_qgis/**/*.hpp",
    ], allow_empty = True),
    includes = ["include_root", "include_qgis"],
)

cc_import(
    name = "qgis_core_import",
    shared_library = "lib/libqgis_core.so",
)

cc_import(
    name = "qgis_gui_import",
    shared_library = "lib/libqgis_gui.so",
)

cc_import(
    name = "qgis_analysis_import",
    shared_library = "lib/libqgis_analysis.so",
)

cc_library(
    name = "qgis_core",
    deps = [":qgis_headers", ":qgis_core_import"],
)

cc_library(
    name = "qgis_gui",
    deps = [":qgis_headers", ":qgis_gui_import"],
)

cc_library(
    name = "qgis_analysis",
    deps = [":qgis_headers", ":qgis_analysis_import"],
)

cc_library(
    name = "qgis_all",
    deps = [":qgis_core", ":qgis_gui", ":qgis_analysis"],
)
""")

def _windows_repo(repo_ctx, env):
    osgeo4w_root = env.get("OSGEO4W_ROOT", "")
    osgeo4w_qgis_subdir = env.get("OSGEO4W_QGIS_SUBDIR", "qgis")
    include_env = env.get("INCLUDE", "")
    lib_env = env.get("LIB", "")
    lib_dir_env = env.get("LIB_DIR", "")
    prefix = env.get("QGIS_PREFIX_PATH", "")
    include_override = env.get("QGIS_INCLUDE_DIR", "")
    lib_override = env.get("QGIS_LIB_DIR", "")
    programfiles = env.get("PROGRAMFILES", "")

    include_dir = _first_existing_path(repo_ctx, [
        include_override,
        _path_join(prefix, "include/qgis"),
        _path_join(prefix, "include"),
        _path_join(lib_dir_env, "include/qgis"),
        _path_join(osgeo4w_root, "apps/{}/include".format(osgeo4w_qgis_subdir)),
        _path_join(osgeo4w_root, "apps/{}/include/qgis".format(osgeo4w_qgis_subdir)),
        _path_join(programfiles, "QGIS/include"),
        include_env,
    ])

    lib_dir = _first_existing_path(repo_ctx, [
        lib_override,
        _path_join(prefix, "lib"),
        _path_join(lib_dir_env, "lib"),
        _path_join(osgeo4w_root, "apps/{}/lib".format(osgeo4w_qgis_subdir)),
        _path_join(programfiles, "QGIS/lib"),
        lib_env,
    ])

    if not include_dir or not lib_dir:
        _fail_with_hints("windows")

    include_root = _parent_qgis_include_dir(repo_ctx, include_dir)

    repo_ctx.symlink(include_root, "include_root")
    repo_ctx.symlink(include_dir, "include_qgis")
    repo_ctx.symlink(lib_dir, "lib")

    repo_ctx.file("BUILD.bazel", """
load("@rules_cc//cc:cc_import.bzl", "cc_import")
load("@rules_cc//cc:cc_library.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "qgis_headers",
    hdrs = glob([
        "include_root/**/*.h",
        "include_root/**/*.hpp",
        "include_qgis/**/*.h",
        "include_qgis/**/*.hpp",
    ], allow_empty = True),
    includes = ["include_root", "include_qgis"],
)

cc_import(
    name = "qgis_core_import",
    interface_library = "lib/qgis_core.lib",
    system_provided = True,
)

cc_import(
    name = "qgis_gui_import",
    interface_library = "lib/qgis_gui.lib",
    system_provided = True,
)

cc_import(
    name = "qgis_analysis_import",
    interface_library = "lib/qgis_analysis.lib",
    system_provided = True,
)

cc_library(
    name = "qgis_core",
    deps = [":qgis_headers", ":qgis_core_import"],
)

cc_library(
    name = "qgis_gui",
    deps = [":qgis_headers", ":qgis_gui_import"],
)

cc_library(
    name = "qgis_analysis",
    deps = [":qgis_headers", ":qgis_analysis_import"],
)

cc_library(
    name = "qgis_all",
    deps = [":qgis_core", ":qgis_gui", ":qgis_analysis"],
)
""")

def _macos_repo(repo_ctx, env):
    build_path = env.get("QGIS_BUILD_PATH", "")
    mac_path = env.get("QGIS_MAC_PATH", "")
    prefix = env.get("QGIS_PREFIX_PATH", "")
    include_override = env.get("QGIS_INCLUDE_DIR", "")
    lib_override = env.get("QGIS_LIB_DIR", "")

    core_headers = _first_existing_path(repo_ctx, [
        include_override,
        _path_join(build_path, "output/lib/qgis_core.framework/Headers"),
        _path_join(mac_path, "Frameworks/qgis_core.framework/Headers"),
        _path_join(prefix, "include/qgis"),
        "/Library/Frameworks/qgis_core.framework/Headers",
    ])

    gui_headers = _first_existing_path(repo_ctx, [
        _path_join(build_path, "output/lib/qgis_gui.framework/Headers"),
        _path_join(mac_path, "Frameworks/qgis_gui.framework/Headers"),
        "/Library/Frameworks/qgis_gui.framework/Headers",
    ])

    analysis_headers = _first_existing_path(repo_ctx, [
        _path_join(build_path, "output/lib/qgis_analysis.framework/Headers"),
        _path_join(mac_path, "Frameworks/qgis_analysis.framework/Headers"),
        "/Library/Frameworks/qgis_analysis.framework/Headers",
    ])

    ui_headers = _first_existing_path(repo_ctx, [
        _path_join(build_path, "src/ui"),
    ])

    framework_dir = _first_existing_path(repo_ctx, [
        lib_override,
        _path_join(build_path, "output/lib"),
        _path_join(mac_path, "Frameworks"),
        _path_join(prefix, "lib"),
        "/Library/Frameworks",
    ])

    if not core_headers or not framework_dir:
        _fail_with_hints("macos")

    repo_ctx.symlink(core_headers, "include_core")

    if gui_headers:
        repo_ctx.symlink(gui_headers, "include_gui")
    else:
        repo_ctx.file("include_gui/.keep", "")

    if analysis_headers:
        repo_ctx.symlink(analysis_headers, "include_analysis")
    else:
        repo_ctx.file("include_analysis/.keep", "")

    if ui_headers:
        repo_ctx.symlink(ui_headers, "include_ui")
    else:
        repo_ctx.file("include_ui/.keep", "")

    repo_ctx.file("BUILD.bazel", """
load("@rules_cc//cc:cc_library.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "qgis_headers",
    hdrs = glob([
        "include_core/**/*.h",
        "include_gui/**/*.h",
        "include_analysis/**/*.h",
        "include_ui/**/*.h",
    ], allow_empty = True),
    includes = [
        "include_core",
        "include_gui",
        "include_analysis",
        "include_ui",
    ],
)

cc_library(
    name = "qgis_core",
    deps = [":qgis_headers"],
    linkopts = [
        "-F{framework_dir}",
        "-framework",
        "qgis_core",
    ],
)

cc_library(
    name = "qgis_gui",
    deps = [":qgis_headers"],
    linkopts = [
        "-F{framework_dir}",
        "-framework",
        "qgis_gui",
    ],
)

cc_library(
    name = "qgis_analysis",
    deps = [":qgis_headers"],
    linkopts = [
        "-F{framework_dir}",
        "-framework",
        "qgis_analysis",
    ],
)

cc_library(
    name = "qgis_all",
    deps = [":qgis_core", ":qgis_gui", ":qgis_analysis"],
)
""".format(framework_dir = framework_dir.replace("\\", "/")))

def _qgis_repository_impl(repo_ctx):
    os_name = repo_ctx.os.name.lower()
    env = repo_ctx.os.environ

    if _is_windows(os_name):
        _windows_repo(repo_ctx, env)
    elif _is_macos(os_name):
        _macos_repo(repo_ctx, env)
    else:
        _linux_repo(repo_ctx, env)

_qgis_repository = repository_rule(
    implementation = _qgis_repository_impl,
    environ = [
        "QGIS_INCLUDE_DIR",
        "QGIS_LIB_DIR",
        "QGIS_PREFIX_PATH",
        "QGIS_BUILD_PATH",
        "QGIS_MAC_PATH",
        "OSGEO4W_ROOT",
        "OSGEO4W_QGIS_SUBDIR",
        "PROGRAMFILES",
        "LIB_DIR",
        "INCLUDE",
        "LIB",
    ],
)

_qgis_tag = tag_class(
    attrs = {
        "name": attr.string(default = "qgis"),
    },
)

def _qgis_ext_impl(module_ctx):
    for mod in module_ctx.modules:
        for qgis_tag in mod.tags.qgis:
            _qgis_repository(name = qgis_tag.name)

qgis_ext = module_extension(
    implementation = _qgis_ext_impl,
    tag_classes = {"qgis": _qgis_tag},
)
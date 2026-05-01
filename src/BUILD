load("@rules_cc//cc:cc_binary.bzl", "cc_binary")
load("@rules_qt//:qt.bzl", "qt_cc_library")

qt_cc_library(
    name = "helloworldplugin_lib",
    srcs = ["qgis_hello_world.cpp"],
    hdrs = ["qgis_hello_world.h"],
    copts = select({
        "@platforms//os:windows": ["/std:c++20"],
        "//conditions:default": ["-std=c++20"],
    }),
    deps = [
        "@qgis//:qgis_analysis",
        "@qgis//:qgis_core",
        "@qgis//:qgis_gui",
        "@nlohmann_json//:json",
        "@rules_qt//:qt_core",
        "@rules_qt//:qt_gui",
        "@rules_qt//:qt_widgets",
        "@rules_qt//:qt_xml",
    ],
)

cc_binary(
    name = "helloworldplugin",
    deps = [":helloworldplugin_lib"],
    linkshared = True,
    linkstatic = False,
)
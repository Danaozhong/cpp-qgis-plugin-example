# A Sample QGIS Plugin in C++

A minimum sample of a C++ plugin for QGIS to help you get started.

![build-windows](https://github.com/Danaozhong/cpp-simple-qgis-plugin/actions/workflows/build_windows.yaml/badge.svg)
![build-linux](https://github.com/Danaozhong/cpp-simple-qgis-plugin/actions/workflows/build_linux.yaml/badge.svg)

## Background

If you want to write a plugin for QGIS, I highly recommend to write it in Python. It is platform independent, the API is more stable / less likely to break your plugin, and the documentation is much better.

However, in some cases there is still a use case for C++ plugins: for example, if your plugin requires computation-intensive work, such as processing large data or binary deserialization. In these cases, Python code may run into performance bottlenecks due to the GIL. While there are many workarounds to make Python faster, it doesn't reach the performance of C++.

When I evaluated C++ plugins in QGIS, I realized that there is almost no documentation  on how to do it, and most sample code was >7 years old and failed to compile.

That's why I provided this sample. It works with QGIS 3.34, comes with both CMake and QMake support, and provides sample CI jobs to build the plugin for you. The code is the bare minimum to write a working C++ QGIS plugin.

Only use C++ plugins if you really have to. You'll need to provide builds for every platform you want to support. The QGIS API is frequently changing, and every API change will break your plugin. You will either need to pin your QGIS version, or have a matrix of CI jobs for every QGIS version. General maintenance is higher.

## Prerequisites

You can build this plugin either using QMake  (QMake is a build environment used for projects that use Qt), or the recommended way, CMake.
Besides having CMake installed, you also need to have the QGIS developer dependencies installed (the QGIS API).

### Windows

Don't use a preinstalled QGIS. Install [OSGeo4W](https://trac.osgeo.org/osgeo4w/), and use install QGIS and the developer dependencies as well. You will need to install the following components:
- `qgis`
- `qgis-deps`
- `qgis-common`
- `qgis-devel`

If your plugin is using Qt, also install the following dependencies:
- `qt5-devel`
- `qt5-libs`
- `qt5-tools`
- `qt5-libs-symbols`

You can look at the [Windows GitHub Action](https://github.com/Danaozhong/cpp-simple-qgis-plugin/blob/main/.github/workflows/build_windows.yaml) in this repository to see how to install the dependencies automatically.

These packages include the QGIS API headers (for example `qgsconfig.h`), and the static libraries (`qgis_core.lib`, `lqgis_gui.lib`) required to compile a plugin. If you want to use the plugin in a pre-installed QGIS, you can be sure that the libraries and headers fit to the installed QGIS version.
If you are using `OSGeo4W`, there is no need to build QGIS yourself.

Make you you have Visual Studio installed. The pre-built QGIS libraries in `OSgeo4W` were built with MSVC, so you need to use MSVC as well for compiling the plugin. I am using Visual Studio 2022.

For the CMake configuration to work, CMake must be able to find the path to the following libraries:
- `OSGeo4W`: set the environment variable `OSGEO4W_ROOT` to your OSGEO4W installation directory.
- `Qt5`: set the `Qt5_DIR` environment variable to the Qt5 installation directory. If you are using Qt5 delivered with OSGeo4W, simply use:
```shell
export OSGEO4W_ROOT = C:/OSGeo4W
export Qt5_DIR = <OSGEO4W_ROOT>/apps/Qt5
```
### macOS (ARM or x86)

QGIS support for Mac is badly maintained. From the little research I have done, it seems that you will need to build QGIS and the dependencies from scratch.

If you have more experience with building on macOS, please feel welcomed to raise a PR!

### Linux (Ubuntu)

On Ubuntu, you can simply install the `qgis_dev` package:
```shell
sudo apt install qgis-dev
```
Make sure that the package fits to the QGIS version you intend to use.

### Cross-compiling using MinGW
If you want to use MinGW, either from Linux to cross-compile for Windows, or on Windows, you will need to rebuild QGIS manually to build the `qgis_core.lib` and `qgis_gui.lib` static libraries.

## Building (CMake)

Run CMake using:
```shell
mkdir build
cd build
cmake ..
cmake --build .
```
Which should generate the build environment, and build the dynamic libraries that you can use in QGIS.

## Building (QMake)

Adapt the paths to MSVC and OSGeo4W in `OSGeo4W_dev.bat`. Also, please adapt the paths in `qgis_hello_world.pro`.
Setup the environment by calling :
```bash
env.bat
```
Afterwards, run `qmake` to generate a `Makefile`:
```bash
qmake
```
On Linux, run `make` to build the plugin.
```bash
make
```
On Windows, the `Makefile` only works with the MSVC build toolchain, so you need to invoke `nmake` (the `make` of MSVC):
```bash
nmake
```

## Testing 

The build process should generate a `helloworldplugin.dll` or `libhelloworldplugin.so`. Copy it into `<OSGeo4W_Dir>\apps\qgis\plugins`. 

You can also download the [CI build artifacts](https://github.com/Danaozhong/cpp-simple-qgis-plugin/actions). Click on the link, open the latest run, and download the zip file from the GitHub Action:

![](res/download.png)

After restarting QGIS, the plugin should show up:

![](res/installed-plugin.png)

After activating the plugin, the plugin should show up in the plugin menu bar:

![](res/plugin-menu.png)


## Pitfalls

- When using Qt, it seems to be quite important to match debug/release configuration with the build type of your QGIS installation, i.e. use a release library for a release version of QGIS.
- The QGIS API is constantly evolving. As such, the static libraries that are used to link the plugin may not work with every QGIS version. I noticed that libraries built with QGIS 3.34 don't work on QGIS 3.24. You'll need to build for many different QGIS versions, or use only a specific QGIS version. This is another reason why Python plugins are usually a better choice, as their API is more stable.
- Logging on `stdout` doesn't seem to be active on release builds. Use `QgsMessageLog::logMessage` to make sure your logs show up in the log window.

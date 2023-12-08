# A sample QGIS Plugin in C++


A bare minimum sample of a C++ QGIS plugin to help you get started.

## Background

When you want to write a plugin for QGIS, in 90% of the cases you should resort to Python. It is so much easier, better documented and works really well.
C++ plugins may still be relevant for computation-intensive plugins, where Python would run into performance bottlenecks due to the GIL.
There is almost no documentation online on how to write C++ QGIS plugins, and most samples are >7 years old and didn't work anymore.

That's why I provided this sample. It works with QGIS 3.34.

A bare minimum sample of a C++ QGIS plugin to help you get started.

Only use C++ plugins if you really have to. The QGIS API is changing, you will have to provide builds for every platform, and general maintenance is higher.

## How to build

QGIS plugins are easiest built using `qmake`. `qmake` is a build environment used for projects that use Qt.

## Prerequisites (Windows)

Don't use a preinstalled QGIS. Install `OSGeo4W`, and use the installer to install QGIS and the developer dependencies as well. You will need to install the following components:
- `qgis`
- `qgis-deps`
- `qgis-common`
- `qgis-devel`

If your plugin is using Qt, make sure to also install the following dependencies.
- `qt5-devel`
- `qt5-libs`
- `qt5-tools`
- `qt5-libs-symbols`

You can look at the GitHub Action in this repository to see how to install the package automatically.

These packages include the headers (for example `qgsconfig.h`), and the libraries (`qgis_core.lib`, `lqgis_gui.lib`) required to compile a plugin. If you install the same version of QGIS, you can be sure that the libraries and headers fit to the installed QGIS version.
If you are using `OSGeo4W`, there is no need to build QGIS yourself.

Make you you have Visual Studio installed. The pre-built QGIS libraries in `OSgeo4W` were built with MSVC, so you need to use MSVC as well for compiling the plugin. I am using Visual Studio 2022.

For the CMake configuration to work, CMake must be able to find the path to the following libraries:
- `OSGeo4W`: set the environment variable `OSGEO4W_ROOT` to your OSGEO4W installation directory.
- `Qt5`: set the `Qt5_DIR` environment variable to the Qt5 installation directory. If you are using Qt5 delivered with OSGEO4W, you can simply use
```shell
export OSGEO4W_ROOT = C:/OSGeo4W
export Qt5_DIR = <OSGEO4W_ROOT>/apps/Qt5
```

## Pre
## Building using CMake

Run CMake using:
```shell
mkdir build
cd build
cmake ..
cmake --build .
```
Which should generate the build environment, and build the dynamic libraries that you can use in QGIS.

## Building using QMake

Adapt the paths to MSVC and OSGeo4W in `OSGeo4W_dev.bat`. Also, please adapt the paths in `qgis_hello_world.pro`.
Setup the environment by calling :
```bash
env.bat
```
Afterwards, run `qmake` to generate a `Makefile`:
```bash
qmake
```
On Windows, the `Makefile` only works with the MSVC build toolchain, so you need to invoke `nmake` (the `make` of MSVC):
```bash
nmake
```

### Testing 

The build process should generate a `helloworldplugin.dll`. Copy it into `<OSGeo4W_Dir>\apps\qgis\plugins`. After restarting QGIS, the plugin should show up:

![](res/installed-plugin.png)

After activating the plugin, the plugin should show up in the plugin menu bar:

![](res/plugin-menu.png)


## Pitfalls

- When using Qt, it seems to be quite important to match debug/release configuration with the build type of your QGIS installation, i.e. use a release library for a release version of QGIS.
- The QGIS API is constantly evolving. As such, the static libraries that are used to link the plugin may not work with every QGIS version. I noticed that libraries built with QGIS 3.34 don't work on QGIS 3.24. You'll need to build for many different QGIS versions, or use only a specific QGIS version. This is another reason why Python plugins are usually a better choice, as their API is more stable.
- Logging on `stdout` doesn't seem to be active on release builds. Use `QgsMessageLog::logMessage` to make sure your logs show up in the log window.

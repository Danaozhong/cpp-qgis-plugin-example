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

### Prerequisites

Don't use a preinstalled QGIS. Install `OSGeo4W`, and use the installer to install QGIS and the developer dependencies as well. You will need to install the following components:
- `qgis-dev-deps`
- `qgis-devel`
- `qgis`
- `libtiff`, `libtiff-devel`

These packages include the headers (for example `qgsconfig.h`), and the libraries (`qgis_core.lib`, `lqgis_gui.lib`) required to compile a plugin. If you install the same version of QGIS, you can be sure that the libraries and headers fit to the installed QGIS version.
There is no need to build QGIS yourself.

I also did a checkout of the QGIS repository to be able to have all the include headers (this may not be necessary).

### Building on Windows

If you want to use MSVC, make you you have Visual Studio installed. I am using Visual Studio 2022.

Adapt the paths to MSVC and OSGeo4W in `OSGeo4W_dev.bat`. Also, adapt the paths in `qgis_hello_world.pro`.
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
It should generate a `qgis_hello_world.dll`. Copy it into `<OSGeo4W_Dir>\apps\qgis\plugins`. After restarting QGIS, the plugin should show up:

![](res/installed-plugin.png)

## TODOs

- Provide an example using `CMake`.
- Add some actual functionality to the plugin.
- Provide debugging hints.


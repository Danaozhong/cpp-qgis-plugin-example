QGIS_DIR = C:\OSGeo4W\QGIS
QGIS_DEV_DIR=C:\OSGeo4W\apps\qgis

TEMPLATE = lib
CONFIG += c++17
QT += xml widgets core

# Install "qgis-dev" to find these libs.
LIBS += -L$${QGIS_DEV_DIR}/lib -lqgis_core -lqgis_gui



# This includes "qgsconfig.h". Make sure to install "qgis-dev".
INCLUDEPATH += $$QGIS_DEV_DIR/include

# All following headers are the QGIS include directories.
INCLUDEPATH += $$QGIS_DIR/src/plugins
INCLUDEPATH += $$QGIS_DIR/src/gui
INCLUDEPATH += $$QGIS_DIR/src/core
INCLUDEPATH += $$QGIS_DIR/src/core/editform
INCLUDEPATH += $$QGIS_DIR/src/core/elevation
INCLUDEPATH += $$QGIS_DIR/src/core/expression
INCLUDEPATH += $$QGIS_DIR/src/core/geometry
INCLUDEPATH += $$QGIS_DIR/src/core/project
INCLUDEPATH += $$QGIS_DIR/src/core/proj
INCLUDEPATH += $$QGIS_DIR/src/core/providers
INCLUDEPATH += $$QGIS_DIR/src/core/metadata
INCLUDEPATH += $$QGIS_DIR/src/core/network
INCLUDEPATH += $$QGIS_DIR/src/core/labeling
INCLUDEPATH += $$QGIS_DIR/src/core/layertree
INCLUDEPATH += $$QGIS_DIR/src/core/maprenderer
INCLUDEPATH += $$QGIS_DIR/src/core/textrenderer
INCLUDEPATH += $$QGIS_DIR/src/core/settings
INCLUDEPATH += $$QGIS_DIR/src/core/symbology
INCLUDEPATH += $$QGIS_DIR/src/core/sensor
INCLUDEPATH += $$QGIS_DIR/src/core/vector
INCLUDEPATH += $$QGIS_DIR/external/nlohmann

SOURCES = qgis_hello_world.cpp
HEADERS = qgis_hello_world.h
DEST = qgis_hello_world.so
DEFINES += GUI_EXPORT= CORE_EXPORT=

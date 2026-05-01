cmake_minimum_required(VERSION 3.16)

project(
  QgisHelloWorldPlugin
  VERSION 0.1
  DESCRIPTION "A simple QGIS C++ plugin"
  LANGUAGES CXX)


if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

  set_property(GLOBAL PROPERTY USE_FOLDERS ON)
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)




find_package(QGIS REQUIRED)

# Try to find Qt5 or 6, whichever is available.
find_package(Qt6 COMPONENTS Core Widgets Xml Gui )
if (NOT Qt6_FOUND)
  # Fall back to Qt5 if Qt6 is not found.
  find_package(Qt5 5 REQUIRED COMPONENTS Core Widgets Xml Gui REQUIRED)

  # Enable Qt5-specific extensions
  set(CMAKE_AUTOMOC ON)
  set(CMAKE_AUTORCC ON)

else()
  # Enable Qt6-specific extensions
  qt_standard_project_setup()
endif()

find_package(Qt5 COMPONENTS Core Widgets Xml Gui REQUIRED)

# The compiled library code is here
add_subdirectory(src)
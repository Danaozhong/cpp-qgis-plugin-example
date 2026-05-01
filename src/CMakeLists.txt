add_library(helloworldplugin MODULE
  qgis_hello_world.cpp
)

target_link_libraries(helloworldplugin
  ${QGIS_CORE_LIBRARY}
  ${QGIS_GUI_LIBRARY}
  ${QGIS_ANALYSIS_LIBRARY}
  Qt::Core
  Qt::Gui
  Qt::Xml
  Qt::Widgets
)

target_include_directories(helloworldplugin PUBLIC
  ${Boost_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR}
  ${QGIS_INCLUDE_DIR}
)

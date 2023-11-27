add_library(helloworldplugin MODULE
  qgis_hello_world.cpp
)

target_link_libraries(helloworldplugin
  ${LIBS}
)

target_include_directories(helloworldplugin PUBLIC
  ${INCLUDES}
)

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Actividad04_autogen"
  "CMakeFiles/Actividad04_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Actividad04_autogen.dir/ParseCache.txt"
  )
endif()

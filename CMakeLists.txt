cmake_minimum_required(VERSION 3.17)

project(minutils LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20 CACHE STRING "")
set(CMAKE_CXX_STANDARD_REQUIRED YES CACHE BOOL "")
set(CMAKE_CXX_EXTENSIONS NO CACHE BOOL "")
set(CMAKE_EXPORT_COMPILE_COMMANDS YES)

function (add_util tgt)
  add_executable(${tgt} ${tgt}.cpp)
  set_target_properties(${tgt} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/minutils)
endfunction()

add_util(touch)
add_util(cat)
add_util(tac)


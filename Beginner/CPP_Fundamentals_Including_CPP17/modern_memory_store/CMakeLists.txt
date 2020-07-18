cmake_minimum_required(VERSION 3.12)
project(modern_memory_store VERSION 0.1.0)

message(STATUS ">>> ${CMAKE_SOURCE_DIR}")
include_directories(${CMAKE_SOURCE_DIR}/include/)
link_directories(${CMAKE_SOURCE_DIR}/lib/)
include_directories(${CMAKE_SOURCE_DIR}/lib/include/)

add_library(
    oldlocation SHARED # INCLUDE/STATIC
    splike/lib_location/include/
    splike/lib_location/Location.cpp
)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib/)
set(CMAKE_SHARED_LIBRARY_PREFIX ${CMAKE_SOURCE_DIR}/lib/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/)


file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(run ${SOURCES})
target_link_libraries(run oldlocation)
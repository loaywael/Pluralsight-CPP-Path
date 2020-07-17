cmake_minimum_required(VERSION 3.12)
project(copy_constructor VERSION 0.1.0)


include_directories(include/)
# link_directories(lib/lib_a/)
# include_directories(lib/lib_a/include/)
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(run ${SOURCES})

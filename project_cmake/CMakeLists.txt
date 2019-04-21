cmake_minimum_required(VERSION 3.0)

project(complete)

add_subdirectory(lib_cmake)

include_directories(lib_cmake/include)

add_executable(complete src/main.cpp)

target_link_libraries(complete libhola)

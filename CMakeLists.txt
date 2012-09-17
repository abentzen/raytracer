cmake_minimum_required(VERSION 2.8.9)

# Load project specific CMake modules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules")

project(raytracer CXX)
add_subdirectory(src raytracer)
enable_testing()
add_subdirectory(test)
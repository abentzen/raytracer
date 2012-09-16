cmake_minimum_required(VERSION 2.8.9)

project(raytracer CXX)
add_subdirectory(src raytracer)
enable_testing()
add_subdirectory(test)
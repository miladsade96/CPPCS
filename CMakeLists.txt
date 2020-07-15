cmake_minimum_required(VERSION 3.16)
project(CPPCS)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(cmake-build-debug)
include_directories(src)

add_executable(CPPCS
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/Project.cbp
        src/numerical_methods/Exercise_01.cpp
        CMakeLists.txt
        LICENSE
        README.md)

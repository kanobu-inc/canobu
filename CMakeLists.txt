cmake_minimum_required(VERSION 3.10)

if (haiku32)
    SET(CMAKE_CXX_COMPILER /bin/g++-x86)
endif()

project(canobu)
add_executable(canobu canobu.cpp)
add_executable(test test.cpp)

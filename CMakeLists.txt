cmake_minimum_required(VERSION 3.10)

if (HAIKU32)
    SET(CMAKE_CXX_COMPILER /bin/g++-x86)
endif()

project(canobu)
add_executable(canobu canobu.cpp)

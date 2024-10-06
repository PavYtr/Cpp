cmake_minimum_required(VERSION 3.29)
project(Vec2d)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-pedantic -Wall -Wextra ")
include_directories("/Users/pavelatrusev/CLionProjects/Vec2d")
add_executable(Vec2d
        main.cpp
        vec2d.cpp
        vec2d.h
        main.cpp)

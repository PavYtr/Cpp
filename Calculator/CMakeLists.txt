set(TARGET "Calculator")
cmake_minimum_required(VERSION 3.29)
project(${TARGET})

set(SOURCES
        calculator.cpp
        std_lib_facilities.h
        token.cpp
        token.h
        variable.cpp
        variable.h
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-pedantic -Wall -Wextra")
include_directories("/Users/pavelatrusev/CLionProjects/Calculator/")
add_executable(
        ${TARGET}
        ${SOURCES}
)



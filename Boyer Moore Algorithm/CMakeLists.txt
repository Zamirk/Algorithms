cmake_minimum_required(VERSION 3.3)
project(untitled15)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp bm.cpp bm.h)
add_executable(untitled15 ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.3)
project(untitled12)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Vertex.cpp Vertex.h DijkstrasAlgorithm.cpp DijkstrasAlgorithm.h)
add_executable(untitled12 ${SOURCE_FILES})
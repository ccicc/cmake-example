cmake_minimum_required(VERSION 3.10)

project(main)

add_subdirectory(src)

message(STATUS "source dir: " ${PROJECT_SOURCE_DIR})

message(STATUS "binary dir: " ${PROJECT_BINARY_DIR})
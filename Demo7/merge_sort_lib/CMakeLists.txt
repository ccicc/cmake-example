cmake_minimum_required(VERSION 3.10)

project(main)

add_subdirectory(src)

add_executable(main main.c)

target_link_libraries(main merge_sort)

install(FILES include/merge_sort.h DESTINATION include)

message(STATUS "source dir: " ${PROJECT_SOURCE_DIR})

message(STATUS "binary dir: " ${PROJECT_BINARY_DIR})

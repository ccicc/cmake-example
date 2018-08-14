# create by lq on 2018/08/15

cmake_minimum_required(VERSION 3.10)

project(ms_test)

add_subdirectory(src)

add_executable(ms_test main.c)

target_link_libraries(ms_test my_sort)

install(FILES COPYRIGHT README DESTINATION doc)

install(DIRECTORY include/ DESTINATION include)

install(DIRECTORY doc/ DESTINATION doc)

message(STATUS "source dir: " ${PROJECT_SOURCE_DIR})

message(STATUS "binary dir: " ${PROJECT_BINARY_DIR})

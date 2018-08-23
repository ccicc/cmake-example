cmake_minimum_required(VERSION 3.10)

project(main)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(src)

add_executable(main main.c)

target_link_libraries(main mylib)

# 常用变量
message(STATUS "project_name: " ${PROJECT_NAME})

message(STATUS "cmake_source_dir: " ${CMAKE_SOURCE_DIR})
message(STATUS "cmake_binary_dir: " ${CMAKE_BINARY_DIR})

message(STATUS "project_source_dir: " ${PROJECT_SOURCE_DIR})
message(STATUS "project_binary_dir: " ${PROJECT_BINARY_DIR})

# 当前CMakeLists.txt所在路径
message(STATUS "cmake_current_source_dir: " ${CMAKE_CURRENT_SOURCE_DIR})
# 当前编译目录 可通过 add_subdirectory() 修改 
# set(EXECUTABLE_OUTPUT_PATH path) 只修改最终目标二进制存放路径,不会对该变量造成影响
message(STATUS "cmake_current_binary_dir: " ${CMAKE_CURRENT_BINARY_DIR})

# CMakeLists.txt完整路径
message(STATUS "cmake_current_list_file: " ${CMAKE_CURRENT_LIST_FILE})
# 当前行数
message(STATUS "cmake_current_list_line: " ${CMAKE_CURRENT_LIST_LINE})

# 指定自定义cmake模块存放路径
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_PATH}/cmake)
message(STATUS "cmake_module_path: " ${CMAKE_MODULE_PATH})

# 最终二进制文件和库文件存放路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
message(STATUS "executable_output_path: " ${EXECUTABLE_OUTPUT_PATH})
message(STATUS "library_output_path: " ${LIBRARY_OUTPUT_PATH})

# 常用环境变量
message(STATUS "home: " $ENV{HOME})

# 自动将当前工程目录加入头文件查找目录中
set(ENV${CMAKE_INCLUDE_CURRENT_DIR} ON)

# 工程提供的头文件目录始终在系统头文件目录前
set(ENV${CMAKE_INCLUDE_DIRECTORIES_PROJECT_BEFORE} ON)

# 添加要查找的头文件路径和库路径
set(ENV${CMAKE_INCLUDE_PATH} /tmp/include)
set(ENV${CMAKE_LIBRARY_PATH} /tmp/lib)

# 系统信息
# cmake 主版本号
message(STATUS "cmake_major_version: " ${CMAKE_MAJOR_VERSION})
# cmake 副版本号
message(STATUS "cmake_minor_version: " ${CMAKE_MINOR_VERSION})
# cmake 补丁等级
message(STATUS "cmake_patch_version: " ${CMAKE_PATCH_VERSION})
# 系统完整名称
message(STATUS "cmake_system: " ${CMAKE_SYSTEM})
# 系统名称（不包含版本）
message(STATUS "cmake_system_name: " ${CMAKE_SYSTEM_NAME})
# 系统版本
message(STATUS "cmake_system_version: " ${CMAKE_SYSTEM_VERSION})
# 处理器名称
message(STATUS "cmake_system_processor: " ${CMAKE_SYSTEM_PROCESSOR})
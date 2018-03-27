# cmake 最低要求版本
cmake_minimum_required (VERSION 3.4)

# 项目信息
project (Demo2)

# 将指定目录下的源文件保存到指定变量中
aux_source_directory(. DIR_SRCS)

# 指定生成目标
add_executable (Demo2 ${DIR_SRCS})
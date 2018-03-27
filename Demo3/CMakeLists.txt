# cmake 最低要求版本
cmake_minimum_required (VERSION 3.4)

# 项目信息
project (Demo3)

# 查找指定目录所有源文件，保存到指定变量
aux_source_directory (. DIR_SRCS)

# 添加指定的子目录
# 这样子目录下的cmake文件和源码也会被处理
add_subdirectory(math)

# 指定生成目标
add_executable(Demo3 ${DIR_SRCS})

# 链接指定的静态库
# 指明可执行文件需要链接一个名为MathFunctions的链接库
target_link_libraries(Demo3 MathFunctions)

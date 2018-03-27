# 查找当前目录下的所有源文件
# 并将其保存到指定变量
aux_source_directory(. DIR_LIB_SRCS)

# 生成静态链接库
# 将指定目录中的源文件编译为静态链接库
add_library(MathFunctions ${DIR_LIB_SRCS})
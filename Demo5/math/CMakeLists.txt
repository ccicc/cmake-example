aux_source_directory (. DIR_LIB_SRCS)

add_library (MathFunctions ${DIR_LIB_SRCS})

# 指定库的安装路径
install (TARGETS MathFunctions DESTINATION build)
install (FILES MathFunctions DESTINATION include)
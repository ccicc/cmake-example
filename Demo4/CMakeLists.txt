# cmake 最低版本要求
cmake_minimum_required (VERSION 3.4)

# 项目详情
project (Demo4)

# 指定配置文件
configure_file(
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

# 是否使用 MathFunctions 静态库
option(
    USE_MYMATH
    "Use proivded math impolementation" OFF
)

# 是否加载 MathFunctions 静态库
if (USE_MYMATH)
    include_directories("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory(math)
    set(EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MYMATH)

aux_source_directory(. DIR_SRCS)

# 指定生成目标
add_executable (Demo4 ${DIR_SRCS})
target_link_libraries (Demo4 ${EXTRA_LIBS})
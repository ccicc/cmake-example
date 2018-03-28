# cmake 最低要求版本
cmake_minimum_required (VERSION 3.4)

# 项目信息
project (Demo5)

# 指定配置文件
configure_file(
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

# 是否使用本地 MathFunctions 静态库
option(
    USE_MYMATH
    "Use provided math implementation" ON
)

# 是否加载本地库
if(USE_MYMATH)
    include_directories ("${PROJECT_SOURCE_DIR}/math")
    add_subdirectory (math)
    set(EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MYMATH)

# 设定目录变量
aux_source_directory (. DIR_SRCS)

# 指定生成目标
add_executable (Demo5 ${DIR_SRCS})
target_link_libraries (Demo5 ${EXTRA_LIBS})

# 指定安装路径 windos默认为C:/Program Files下
install(TARGETS Demo5 DESTINATION build)
install(FILES "${PROJECT_BINARY_DIR}/config.h" DESTINATION include)

# 请用测试
enable_testing()

# 测试程序是否运行
add_test(test_run Demo5 2 3)

# 测试帮助信息是否可以正常显示
add_test(test_usage Demo5)
set_tests_properties(test_usage
    PROPERTIES PASS_REGULAR_EXPRESSION "Usage: .* base exponent")

# 测试2的平方
add_test(test_2_2 Demo5 2 2)
set_tests_properties(
    test_2_2
    PROPERTIES PASS_REGULAR_EXPRESSION "4.00"
)

# 测试5的平方
add_test(test_5_2 Demo5 5 2)
set_tests_properties(
    test_5_2
    PROPERTIES PASS_REGULAR_EXPRESSION "25.00"
)

# 测试10的平方
add_test(test_10_2 Demo5 10 2)
set_tests_properties(
    test_10_2
    PROPERTIES PASS_REGULAR_EXPRESSION "100.00"
)

# 使用宏简化测试
macro (do_test arg1 arg2 result)
    add_test(test_${arg1}_${arg2} Demo5 ${arg1} ${arg2})
    set_tests_properties(
        test_${arg1}_${arg2}
        PROPERTIES PASS_REGULAR_EXPRESSION ${result}
    )
endmacro(do_test)

do_test(3 3 "27.00")
do_test(3 2 "9.00")



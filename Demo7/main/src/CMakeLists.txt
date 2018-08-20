aux_source_directory(. DIR_SRC)

find_path(sortHeader NAMES merge_sort.h PATHS /tmp/merge_sort/include)

find_path(sortLib NAMES libmerge_sort.so PATHS /tmp/merge_sort/lib)

# 头文件搜索路径
if(sortHeader)
include_directories(BEFORE ${sortHeader})
endif(sortHeader)

# 共享库搜索路径
if(sortLib)
link_directories(${sortLib})
endif(sortLib)

add_executable(main main.c)

# 链接共享库
target_link_libraries(main libmerge_sort.so)

# 链接静态库
# target_link_libraries(main libmerge_sort.a)

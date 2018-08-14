# create by lq on 2018/08/15

aux_source_directory(. LIB_SRC_DIR)

set(LIBRARY_OUTPUT_PATH ./../bin)

add_library(my_sort SHARED ${LIB_SRC_DIR})

add_library(static_my_sort STATIC ${LIB_SRC_DIR})

set_target_properties(my_sort PROPERTIES VERSION 1.2 SOVERSION 1)

set_target_properties(static_my_sort PROPERTIES OUTPUT_NAME my_sort)

set_target_properties(my_sort PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(static_my_sort PROPERTIES CLEAN_DIRECT_OUTPUT 1)

install(TARGETS my_sort static_my_sort
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)
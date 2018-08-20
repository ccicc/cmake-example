aux_source_directory(. DIR_LIB_SRC)

set(LIBRARY_OUTPUT_PATH ../lib)

add_library(merge_sort SHARED ${DIR_LIB_SRC})

add_library(static_merge_sort STATIC ${DIR_LIB_SRC})

set_target_properties(merge_sort PROPERTIES VERSION 1.1 SOVERSION 1.2)

set_target_properties(static_merge_sort PROPERTIES OUTPUT_NAME merge_sort)

set_target_properties(merge_sort PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(static_merge_sort PROPERTIES CLEAN_DIRECT_OUTPUT 1)

install(TARGETS merge_sort static_merge_sort
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)

get_target_property(STATIC_NAME static_merge_sort OUTPUT_NAME)

message(STATUS "static librayr name: " ${STATIC_NAME})

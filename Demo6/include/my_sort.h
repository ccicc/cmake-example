// my_sort.h
// create by lq on 2018/8/15

#ifndef MY_SORT_H_
#define MY_SORT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "my_types.h"

MS_API int getnum(void);

MS_API int partition(int*, int, int);

MS_API void bubble_sort(int*, int);

MS_API void quick_sort(int*, int, int);

MS_API void insert_sort(int*, int);

MS_API void select_sort(int*, int);

#ifdef __cplusplus
}
#endif

#endif // MY_SORT_H_
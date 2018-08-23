// mylib.h
// create by lq on 2018/08/23

#ifndef MY_LIB_H_
#define MY_LIB_H_

#ifdef __cplusplus
extern "C" {
#endif

extern void merge(int*, unsigned, unsigned, unsigned);

extern void merge_sort(int*, unsigned, unsigned);

extern int binary_search(int*, int, int);

#ifdef __cplusplus
}
#endif

#endif // MY_LIB_H_
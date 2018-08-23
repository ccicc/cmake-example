// main.c
// create by lq on 2018/08/23

#include <stdio.h>
#include <stdlib.h>
#include <mylib.h>

#define N (10)

int main(void)
{
    int arr[N] = {11,33,22,55,44,77,66,88,99,100};

    merge_sort(arr, 0, N-1);
    
    for(int i = 0; i < N; i++)
        printf("%d, ", arr[i]);
    fputc('\n', stdout);

    int key = 66;
    int index = binary_search(arr, N, key);
    printf("key = %d, index = %d\n", key, index);

    getchar();
    return 0;
}

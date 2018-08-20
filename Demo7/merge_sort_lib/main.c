#include <stdio.h>
#include <stdlib.h>
#include "include/merge_sort.h"

#define N (5)

int main(void)
{
    int arr[N] = {11,33,22,55,44};

    merge_sort(arr, 0, N-1);

    for(int i = 0; i < N; i++)
    {
        printf("%d, ", arr[i]);
    }
    fputc('\n', stdout);
    getchar();
    return 0;
}
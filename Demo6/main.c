// main.c
// create by lq on 2018/08/15

#include <stdio.h>
#include <stdlib.h>
#include "include/my_sort.h"

void display(int*, int);

int main(void)
{
    int size = 10, count = 0, num = 0;
    int* parr = (int*)calloc(size, sizeof(int)), *mparr = NULL;

    do
    {
        num = getnum();
        count++;
        if(count > size)
        {
            size += 5;
            mparr = (int*)realloc(parr, sizeof(int) * size);
            if(mparr != NULL)
                parr = mparr;
            else
            {
                free(parr);
                fputs("realloc() error!\n", stderr);
                return MS_MEMOUT;
            }
        }
        parr[count-1] = num;
    } while(num != 0);

    quick_sort(parr, 0, count-1);
    display(parr, count);

    free(parr);parr = NULL;
    getchar();
    return 0;
}

void display(int* arr, int len)
{
    for(int i = 0; i < len; ++i)
    {
        printf("%d, ", arr[i]);
    }
    fputc('\n', stdout);
    return;
}
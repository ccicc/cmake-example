// my_sort.c
// create by lq on 2018/8/15

#include <stdio.h>
#include <stdbool.h>
#include "./../include/my_sort.h"

int getnum(void)
{
    int num;
    while(!(scanf("%d", &num) == 1 && getchar() == '\n'))
    {
        fputs("input error, re enter: \n", stdout);
        while(getchar() != '\n')
            continue;
    }
    return num;
}

void bubble_sort(int* arr, int len)
{
    for(int i = 0; i < len - 1; ++i)
    {
        bool isSorted = true;
        for(int j = 0; j < len-1-i; ++j)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            isSorted = false;
        }
        if(isSorted)break;
    }
    return;
}

int partition(int* arr, int low, int high)
{
    int base = arr[low];
    int i = low, j = high;

    while(i < j)
    {
        while(i < j && arr[j] >= base)
            j--;
        while(i < j && arr[i] <= base)
            i++;
        if(i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[low] = arr[i];
    arr[i] = base;
    return i;
}

void quick_sort(int* arr, int low, int high)
{
    int pos = partition(arr, low, high);
    if(low < high)
    {
        quick_sort(arr, 0, pos-1);
        quick_sort(arr, pos+1, high);
    }
    return;
}

void insert_sort(int* arr, int len)
{
    for(int i = 1; i < len; ++i)
    {
        int j = 0;
        while((j < i) && (arr[j] < arr[i]))
            j++;
        if(i != j)
        {
            int temp = arr[i];
            for(int k = i; k > j; --k)
                arr[k] = arr[k-1];
            arr[j] = temp;
        }
    }
    return;
}

void select_sort(int* arr, int len)
{
    for(int i = 0; i < len-1; ++i)
    {
        int min_idx = i;
        for(int j = i + 1; j < len; ++j)
        {
            if(arr[min_idx] > arr[j])
                min_idx = j;
        }
        if(min_idx != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
    return;
}

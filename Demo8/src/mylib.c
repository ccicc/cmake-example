// mylib.c
// create by lq on 2018/08/23

#include <stdio.h>
#include <stdlib.h>
#include "./../include/mylib.h"

void merge(int* arr, unsigned low, unsigned mid, unsigned high)
{
    int k;
    int* temps = (int*)calloc(high-low+1, sizeof(int));
    int l_low = low, l_high = mid, r_low = mid+1, r_high = high;

    for(k = 0; l_low <= l_high && r_low <= r_high; k++)
    {
        if(arr[l_low] <= arr[r_low])
            temps[k] = arr[l_low++];
        else
            temps[k] = arr[r_low++];
    }

    if(l_low <= l_high)
        for(int i = l_low; i <= l_high; i++)
            temps[k++] = arr[i];

    if(r_low <= r_high)
        for(int i = r_low; i <= r_high; i++)
            temps[k++] = arr[i];
    
    for(int i = 0; i < high-low+1; i++)
        arr[low+i] = temps[i];
    
    return;
}

void merge_sort(int* arr, unsigned low, unsigned high)
{
    int mid = 0;
    if(low < high)
    {
        mid = (high+low)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
    return;
}

int binary_search(int* arr, int len, int key)
{
    int low = 0, high = len-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(key > arr[mid])
            low = mid+1;
        else if(key < arr[mid])
            high = mid-1;
        else
            return mid;
    }
    return -1;
}

// main.c 
// create by lq on 2018/08/21

#include <stdio.h>
#include <stdlib.h>
#include <merge_sort.h>

int getnum(void);
void display(int*, int);

int main(void)
{
    int num = 0, size = 10, count = 0;
    int* parr = (int*)calloc(size, sizeof(int)), *mparr;
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
                getchar();
                exit(1);
            }
        }
        parr[count-1] = num;
    } while(num != 0);

    merge_sort(parr, 0, count-1-1);
    display(parr, count-1);

    getchar();
    return 0;
}

int getnum()
{
    int num;
    while(!((scanf("%d", &num) == 1) && getchar() == '\n'))
    {
        fputs("error input, re enter: \n", stdout);
        while(getchar() != '\n')
            continue;
    }
    return num;
}

void display(int* arr, int len)
{
    for(int i = 0; i < len ;i++)
    {
        printf("%d, ", arr[i]);
    }
    fputc('\n', stdout);
    return;
}
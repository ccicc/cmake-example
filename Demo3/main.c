#include <stdio.h>
#include <stdlib.h>
#include "math/MathFunctions.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Usage: %s base exponent!\n", argv[0]);
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    double result = power(base, exponent);
    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);

    system("pause");
    return 0;
}
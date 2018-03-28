#include <stdio.h>
#include <stdlib.h>
#include "config.h"

#ifdef USE_MYMATH
#include "math/MathFunctions.h"
#else
#include <math.h>
#endif

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Usage: %s base exponent!\n", argv[0]);
        return 0;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
#ifdef USE_MYMATH
    printf("use MathFunction library!\n");
    double result = power(base, exponent);
#else
    printf("use math library!\n");
    double result = pow(base, exponent);
#endif
    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);
    return 0;
}
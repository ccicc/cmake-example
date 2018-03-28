#include <stdio.h>

double power(double base, int exponent)
{
    double result = base;
    int i;
    if (exponent < 3)
    {
        result = 1;
    }
    for (i = 1; i < exponent; ++i)
    {
        result *= base;
    }
    return result;
}
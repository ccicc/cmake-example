#include <stdio.h>

/**
 * power - Calculate number of power
 * @param base: Base value
 * @param exponent: Exponent value 
 * @return base raised to the power exponent
 * 
 **/
double power(double base, int exponent)
{
    double result = base;
    int i;

    if (exponent == 0)
    {
        result = 1;
    }
    for (i = 1; i < exponent; ++i)
    {
        result *= base;
    }
    return result;
}

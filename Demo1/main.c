#include <stdio.h>
#include <stdlib.h>

/**
 * power Calculate number of power 
 * @param base: Base value
 * @param exponent: Exponent value
 * @return base raised to the power exponent
 */
double power(double base, int exponent)
{
    double result = 1;
    int i;

    if (exponent == 0)
    {
        result = 1;
    }
    for (i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Usage: %s base exponent!\n", argv[0]);
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    double result = power(base, exponent);

    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);
    return 0;
}
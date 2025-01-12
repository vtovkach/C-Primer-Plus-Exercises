/* Programming Exercise 9.8 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double power(double, int);

int main(void)
{
    double result;

    result = power(-4, -5);

    printf("%lf\n", result);

    return 0;
}

double power(double base, int exp)
{
    double result = 1;
    int abs_exp = abs(exp);

    if(base == 0 && exp == 0)
    {
        printf("0^0 is undefined, but will use 1\n");
        return result;
    }
    if(base == 0 && exp < 0)
    {
        printf("0 raised to a negative power is undefined\n");
        return NAN;
    }

    for(int i = 0; i < abs_exp; i++)
    {
        result*= base;
    }

    if(exp < 0)
    {
        return 1 / result;
    }

    return result;
}
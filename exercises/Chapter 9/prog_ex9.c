/* Programming Exercise 9.9 */

#include <stdio.h>
#include <stdlib.h>

double power(double, int);

int main(void)
{

    double result;

    result = power(4.333, -3);

    printf("%lf\n", result);

    return 0;
}

double power(double base, int exp)
{
    double result;
    int abs_exp = abs(exp); 

    if(base == 0 && abs_exp == 0)
    {
        printf("0^0 is undefined form, will return 1 for simplicity\n");
        return 1;
    }
    if(abs_exp == 0)
    {
        return 1;
    }
    if(base == 0 && abs_exp != 0)
    {
        return 0;
    }

    if(abs_exp > 0)
    {
        result = base * power(base, abs_exp-1);
    }
    else
    {
        result = 1;
    }

    if(exp < 0)
        result = 1 / result;

    return result;
}
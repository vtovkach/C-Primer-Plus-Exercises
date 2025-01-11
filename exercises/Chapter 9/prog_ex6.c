/* Programming Exercise 9.6 */

#include <stdio.h>

void sort(double *, double *, double *); 

int main(void)
{
    double x, y, z;

    x = 3;
    y = 3;
    z = 7;

    sort(&x, &y, &z);

    printf("x:%.0lf | y: %.0lf | z: %.0lf\n", x, y, z);
    return 0;
}

void sort(double *a, double *b, double *c)
{
    double temp;

    if(*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = *b;
    }
    if(*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

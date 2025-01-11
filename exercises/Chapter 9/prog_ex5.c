/* Programming Exercise 9.5 */

#include <stdio.h>

void larger_of(double *, double *);

// Test driver
int main(void)
{
    double a = 10.1; 
    double b = 6.4;

    printf("Original a: %.2lf | Original b: %.2lf\n", a, b);

    larger_of(&a, &b);

    printf("Final a: %.2lf | Final b: %.2lf\n", a, b);

    return 0;
}

void larger_of(double *a, double *b)
{
    (*a > *b) ? (*b = *a) : (*a = *b);
}
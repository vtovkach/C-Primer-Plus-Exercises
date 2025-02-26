/* Programming Exercise 14.11 */

#include <stdio.h>
#include <math.h>


void transform(const double *source, double *dest, int size, double (*func)(double));

int main(void)
{
    double source[100];
    double target[100];

    // Initialize Array 
    for(int i = 0; i < 100; ++i)
    {
       source[i] = i + 1;  
    }

    printf("Source Array:\n");
    // Print Source Array
    for(int i = 0; i < 100; i++)
    {
        printf("%4.3lf\n", source[i]);
    }

    transform(source, target, 100, sin);

    printf("Target Array:\n");
    // Print Target Array
    for(int i = 0; i < 100; i++)
    {
        printf("%4.3lf\n", target[i]);
    }

    return 0;
}

void transform(const double *source, double *dest, int size, double (*func)(double))
{
    for(int i = 0; i < size; ++i)
    {
        dest[i] = func(source[i]); 
    }
}
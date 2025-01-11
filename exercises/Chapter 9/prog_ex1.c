/* Programming Exercise 9.1 */

// Device a function called min(x, y) that returns the smaller of two double
// values. Test the function with a simple driver. 

# include <stdio.h>

double min(double, double);

// Test driver 
int main(void)
{
    double minimum;

    minimum = min(3.12, 3.02);

    printf("The minimum is %.2lf\n", minimum);

    return 0;
}

double min(double x, double y)
{
    return (x < y) ? x : y;
}
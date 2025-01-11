/* Programming Exercise 9.4 */

#include <stdio.h>

double get_harmonic(double, double);

// Test driver 
int main(void)
{
    double harmonic;

    harmonic = get_harmonic(3.32, 5.33);

    printf("%lf\n", harmonic);

    // Function works as intended.

    return 0;
}


double get_harmonic(double a, double b)
{
    double harmonic;

    harmonic = (1 / a) + (1 / b);  // added inverses of a and b 

    harmonic = harmonic / 2;       // divide sum of inverses by 2, to find average 

    harmonic = 1 / harmonic;       // calculate inverse of average

    return harmonic;
}
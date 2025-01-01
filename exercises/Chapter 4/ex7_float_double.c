#include <stdio.h>
#include <float.h>

int main(void)
{
    double doubleDivision = 1.0 / 3.0;
    float  floatDivision  = 1.0 / 3.0; 
    /* DOUBLE */
    printf("double result: %.*f\n", 4,  doubleDivision);
    printf("double result: %.*f\n", 12, doubleDivision);
    printf("double result: %.*f\n", 16, doubleDivision);
    /* FLOAT */
    printf("float result: %.*f\n", 4,  doubleDivision);
    printf("float result: %.*f\n", 12, doubleDivision);
    printf("float result: %.*f\n", 16, doubleDivision);

    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int sign;
    int limit;
    long double series_sum;
    long double series_difference; 

    long double divisor = 2.0;

    printf("Enter the limit: ");
    scanf("%d", &limit);
    while(limit > 0)
    {
        series_sum = 1.0;
        series_difference = 1.0;
        sign = 1;
        for(int i = 0; i < limit; i++, divisor++)
        {
            series_sum += (1.0 / divisor);
            series_difference -= (1.0 / divisor) * sign;
            sign*=-1;
        }
        printf("Sum approaches %.15llf\n", series_sum);
        printf("Difference approaches %.15llf\n", series_difference);
        divisor = 2.0;
        printf("Enter next limit: ");
        scanf("%d", &limit);
    }

    return 0;
}
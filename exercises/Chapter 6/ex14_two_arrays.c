#include <stdio.h>

#define ARRAY_SIZE 8

int main(void)
{
    double array_one[ARRAY_SIZE];
    double array_two[ARRAY_SIZE];
    double cummulative_sum;

    for(int i = 0; i < ARRAY_SIZE; i++)
    {   
        printf("Enter integer to fill array: ");
        scanf("%lf", &array_one[i]);
    }

    cummulative_sum = 0;
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cummulative_sum += array_one[i];
        array_two[i] = cummulative_sum;
    }

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%5.2lf ", array_one[i]);
    }
    printf("\n");
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%5.2lf ", array_two[i]);
    }
    printf("\n");

    return 0;
}
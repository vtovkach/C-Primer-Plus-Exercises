#include <stdio.h>

int main(void)
{
    int lower_limit;
    int upper_limit; 
    int square_sum;
    
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower_limit, &upper_limit);
    while(lower_limit < upper_limit)
    {
        square_sum = 0;
        for(int j = lower_limit; j <= upper_limit; ++j)
        {
            square_sum+= j * j;
        }
        printf("The sums of the squares from %d to %d is %d\n", lower_limit * lower_limit, upper_limit * upper_limit, square_sum);
        printf("Enter next set of limits: ");
        scanf("%d %d", &lower_limit, &upper_limit);
    }

    return 0;
}
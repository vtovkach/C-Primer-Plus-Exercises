/* Programming Exercise 7.3 */

#include <stdio.h>

int main(void)
{
    int userInput; 
    int even = 0;
    int odd = 0; 
    int total_even = 0;
    int total_odd = 0; 
    int counter = 0; 

    printf("Enter sequence of integers (0 to terminate)\n");
    while(scanf("%d", &userInput), userInput != 0)
    {
        if((userInput % 2) == 0)
        {
            ++even;
            total_even+= userInput;
        }
        else
        {
            ++odd;
            total_odd+= userInput;
        }
        ++counter;
    }
    printf("Total number of even integers: %d\n", even);
    printf("Avg value of the even integers: %.2f\n", (counter != 0) ? ((float) total_even / even) : 0);  // ? handles the case when the only input is 0
    printf("Total number of odd integers: %d\n", odd);
    printf("Avg number of odd integers: %.2f\n", (counter != 0) ? ((float) total_odd / odd) : 0);        // ? handles the case when the only input is 0

    return 0;
}
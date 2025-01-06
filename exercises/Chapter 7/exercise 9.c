/* Programming Exercise 7.9 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned int userInput;
    unsigned int outer_counter = 2;
    unsigned int inner_counter = 2;
    bool is_prime = true;
    
    printf("Enter a positive integer: ");
    scanf("%u", &userInput);

    while(outer_counter <= userInput)
    {
        is_prime = true;
        inner_counter = 2;

        while(inner_counter*inner_counter <= outer_counter)
        {
            if(outer_counter % inner_counter == 0)
            {
                is_prime = false;
                break;
            }
            ++inner_counter;
        }
        if(is_prime)
        {
            printf("%d is prime\n", outer_counter);
        }
        outer_counter++;
    }
    printf("Done\n");
    
    return 0;
}
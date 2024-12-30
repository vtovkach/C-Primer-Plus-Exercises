#include <stdio.h>

int main(void)
{   
    /* user's input number  */
    float userInput; 

    printf("Enter a floating-point value: ");
    scanf("%f", &userInput);

    printf("fixed-point notation: %lf\n", userInput);
    printf("exponential notation: %e\n", userInput);
    printf("p notation: %a\n", userInput);

    return 0;
}
#include <stdio.h>

/* Inches to Centimeters */
int main(void)
{
    float cmInInch = 2.54;
    float userHeightInInches;
    float userHeightInCm;

    printf("Enter your height in Inches: ");
    scanf("%f", &userHeightInInches);

    userHeightInCm = cmInInch * userHeightInInches;

    printf("Your height in Centimeters is %.2f\n", userHeightInCm);

    return 0;
}
#include <stdio.h>

int main(void)
{
    /* Input Data in Cups */
    float userInputCups;
    /* Constant Values */
    int cupsInPint = 2;
    int ozInCups = 8;
    int tableSpInOz = 2;
    int teaspoonInTableS = 3;
    /* Output Values */
    float pints; 
    float oz;
    float tablespoons;
    float teaspoons;

    /* Data Input */
    printf("Enter number of cups: ");
    scanf("%f", &userInputCups);

    /* Data Calculations */
    pints = userInputCups / cupsInPint;
    oz = userInputCups * ozInCups;
    tablespoons = oz * tableSpInOz;
    teaspoons = tablespoons * teaspoonInTableS;

    /* Data Output */
    printf("This number of cups is %.2f number of pints\n", pints);
    printf("This number of cups is %.2f number of ounces\n", oz);
    printf("This number of cups is %.2f number of tablespoons\n", tablespoons);
    printf("This number of cups is %.2f number of teaspoons\n", teaspoons);

    return 0;
}
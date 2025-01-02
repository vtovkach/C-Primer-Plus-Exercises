#include <stdio.h>

void printCube(double value);

int main(void)
{
    double userInput;
    printf("Enter floating-point number to see its cube: ");
    scanf("%lf", &userInput);
    while(userInput > 0)
    {
        printCube(userInput);
        printf("Enter floating-point number to see its cube (0 to exit): ");
        scanf("%lf", &userInput);
    }

    return 0;
}

void printCube(double value)
{
    printf("The cube of the value %.3lf is %.3lf\n", value, value * value * value);
}
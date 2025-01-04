#include <stdio.h>

double calculate(double userInputOne, double userInputTwo);

int main(void)
{
    double userInputOne;
    double userInputTwo;
    double outputResult;

    printf("Enter two floating-point numbers seperated with whitespace: ");
    while(scanf("%lf %lf", &userInputOne, &userInputTwo) == 2)
    {
        outputResult = calculate(userInputOne, userInputTwo);
        printf("The result of the secret operation is %.6lf\n", outputResult);
        printf("Enter two floating-point numbers again (q to exit): ");
    }
    
    return 0;
}

double calculate(double userInputOne, double userInputTwo)
{
    return (userInputOne - userInputTwo) / (userInputOne * userInputTwo);
}
#include <stdio.h>

int main(void)
{
    double userInputOne;
    double userInputTwo;
    double outputResult;

    printf("Enter two floating-point numbers seperated with whitespace: ");
    while(scanf("%lf %lf", &userInputOne, &userInputTwo) == 2)
    {
        outputResult = (userInputOne - userInputTwo) / (userInputOne * userInputTwo);
        printf("The result of the secret operation is %.6lf\n", outputResult);
        printf("Enter two floating-point numbers again (q to exit): ");
    }
    
    return 0;
}
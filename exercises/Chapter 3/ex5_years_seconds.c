#include <stdio.h>

int main(void)
{
    double secondsInYear = 3.156e+7;        
    double userAgeYears;                      /* user's age in years */
    double userAgeSeconds;                    /* user's age in seconds */

    printf("Enter your age in years: ");    
    scanf("%lf", &userAgeYears);

    userAgeSeconds = secondsInYear * userAgeYears;

    printf("Your age in seconds is %e\n", userAgeSeconds);

    return 0;
}
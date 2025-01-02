#include <stdio.h>

#define HOUR 60     // minutes in one hour 

int main(void)
{
    int minutes;
    int hours;

    printf("Enter time in minutes: ");
    scanf("%d", &minutes);
    while(minutes > 0)
    {
        hours = minutes / HOUR;
        minutes = minutes % HOUR;
        printf("It is %d hours and %d minutes.\n", hours, minutes);
        printf("Enter time in minutes again to continue, or enter 0 to exit: ");
        scanf("%d", &minutes);
    }

    return 0;
}
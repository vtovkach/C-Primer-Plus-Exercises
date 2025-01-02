#include <stdio.h>

#define DAYS 7      // days in one week

int main(void)
{
    int daysNum;        // number of days user inputs 
    int weeksNum;       // converted days into weeks 
    int daysRemainder; 

    printf("Enter number of days: ");
    scanf("%d", &daysNum);
    while(daysNum > 0)
    {
        weeksNum = daysNum / DAYS;
        daysRemainder = daysNum % DAYS;
        printf("%d days are %d weeks, %d days.\n", daysNum, weeksNum, daysRemainder);
        printf("Enter number of days again, enter 0 to exit: ");
        scanf("%d", &daysNum);
    }

    return 0;
}
/* Programming Exercise 14.2 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MON_LEN 16

const char *collection_months[] = 
{
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
};

typedef struct Month
{
    char month_name[MON_LEN];
    int month_num;
    int number_days;
} Month;

Month *set_month(int, int);

int count_days(const char *, Month **, int);

int main(void)
{
    int day;
    int number_days;
    int year;
    char month_input[MON_LEN];

    printf("Enter the day, year and month: ");
    scanf("%d %d %s", &day, &year, month_input);


    Month *months[12];

    for(int i = 0; i < 12; i++)
    {
        months[i] = set_month(year, i + 1);
    }

    
    number_days = count_days(month_input, months, day); 

    printf("Here is the number of days from the beginning of the year to that date: %d.\n", number_days);

    // free mememory 
    for(int i = 0; i < 12; i++)
    {
        free(months[i]);
    }

    return 0;
}

int count_days(const char *month_input, Month **months, int day)
{
    int num_days = 0;

    printf("%d.....\n", atoi(month_input));

    if(isdigit(*month_input))
    {
        for(int i = 0; i < atoi(month_input) - 1; i++)
        {
            num_days += months[i]->number_days;
        }
    }
    else
    {
        int i = 0;
        while(strncmp(months[i]->month_name, month_input, 3) != 0)
        {
            num_days += months[i]->number_days;
            i++;
        }
    }

    return num_days + day;
}

Month *set_month(int year, int month_num)
{
    Month *new_month = (Month *)malloc(sizeof(Month));

    new_month->month_num = month_num;
    strncpy(new_month->month_name, collection_months[month_num-1], MON_LEN);
    
    //printf("Month name: %s, month_num: %d,, month_days: %d\n", new_month->month_name, month_num, new_month->number_days);

    // Handle leap years
    if((month_num == 2) && (year % 4 == 0))
    {
        new_month->number_days = 29;
    }
    // Handle leap years
    else if(month_num == 2 && year % 100 == 0 && year % 400 == 0)
    {
        new_month->number_days = 29;
    }
    else if(month_num == 8)
    {
        new_month->number_days = 31;
    }
    else if(new_month->month_num == 2)
    {
        new_month->number_days = 28;
    }
    else if(new_month->month_num % 2 == 0)
    {
        new_month->number_days = 30;
    }
    else
    {
        new_month->number_days = 31;
    }
    printf("Month name: %s, month_num: %d,, month_days: %d\n", new_month->month_name, month_num, new_month->number_days);
    
    return new_month;
}
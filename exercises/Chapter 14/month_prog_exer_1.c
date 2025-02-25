/* Programming Exercise 14.1 */

#include <stdio.h>
#include <string.h>

#define MONTH_LEN   16
#define NUM_MONTHS  12
#define ABB_LEN     4

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

struct month 
{
    char name[MONTH_LEN];
    char abbreviation[ABB_LEN];
    int num_days;
    int month_num;
};

int count_days_to_month(struct month *array_months, int num_month);

int count_days_version2(struct month *array_months, char *name, int len);

// Idea to implment:
// Use command line argumetns to determine which month to find.
// Use 2 different versions

int main(void)
{
    struct month months[12];

    for(int i = 0; i < 12; ++i)
    {
        if(i == 1)
        {
            months[i].month_num = i + 1;
            months[i].num_days = 28;
            strncpy(months[i].name, collection_months[i], MONTH_LEN);
            strncpy(months[i].abbreviation, collection_months[i], 3);
            months[i].abbreviation[3] = '\0';
        }
        else if(i % 2 == 0)
        {
            months[i].month_num = i + 1;
            months[i].num_days = 31;
            strncpy(months[i].name, collection_months[i], MONTH_LEN - 1);
            strncpy(months[i].abbreviation, collection_months[i], 3);
            months[i].abbreviation[3] = '\0';
        }
        else
        {
            months[i].month_num = i + 1;
            months[i].num_days = 30;
            strncpy(months[i].name, collection_months[i], MONTH_LEN - 1);
            strncpy(months[i].abbreviation, collection_months[i], 3);
            months[i].abbreviation[3] = '\0';
        }
    }

    int total_days = count_days_to_month(months, 6);

    printf("Version 1: Number of days until that month is %d.\n", total_days);

    total_days = count_days_version2(months, "June", MONTH_LEN);

    printf("Version 2: Number of days until that month is %d.\n", total_days);

    /*
    for(int i = 0; i < 12; i++)
    {
        printf("Month %5d is %5s, abbr is %5s, number of days is %5d.\n", months[i].month_num, months[i].name, months[i].abbreviation, months[i].num_days);
    }
    */

    return 0;
}

int count_days_to_month(struct month *array_months, int num_month)
{
    int total_days = 0;

    for(int i = 1; i <= num_month; ++i)
    {
        total_days += array_months[i-1].num_days;
    }

    return total_days;
}

// Function assume input is legit 
int count_days_version2(struct month *array_months, char *name, int len)
{
    int total_days = 0;
    int i = 0;

    while(25)
    {
        if(strncmp(array_months[i].name, name, len) == 0)
        {
            total_days += array_months[i].num_days;
            break;
        }
        else
        {
            total_days += array_months[i].num_days;
            i++;
        }
    }
    
    return total_days;
}
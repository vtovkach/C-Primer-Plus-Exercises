// pe12-3a.c 

#include <stdio.h>

void check_mode(int *mode, int prev_mode)
{
    if(*mode != 0 && *mode != 1)
    {
        printf("You entered invalid mode. Program will use the most recent one.\n");
        printf("Program uses European Mode by default.\n");
        *mode = prev_mode;
    }
}

void get_info(int mode, float *distance, float *fuel_consumed)
{

    // MODE 0: Metric Mode (liters per 100 km) 
    // MODE 1: US Mode     (miles  per gallon)

    if(mode == 0)
    {
        printf("Please enter distance you traveled in km: ");
        scanf("%f", distance);
        printf("Please enter the number of liters consumed: ");
        scanf("%f", fuel_consumed);
    }
    else
    {
        printf("Please enter distance you traveled in miles: ");
        scanf("%f", distance);
        printf("Please enter the number of gallons consumed: ");
        scanf("%f", fuel_consumed);
    }
}

void show_info(int mode, float *distance, float *fuel_consumed)
{
    float consumption = 0;

    if(mode == 0)
    {
        consumption = (100 / *distance) * (*fuel_consumed);
        printf("Your fuel consumption is %.2f liters per 100 km.\n", consumption);
    }
    else
    {
        consumption = *distance / *fuel_consumed;
        printf("Your fuel consumption is %.2f miled per gallon.\n", consumption);
    }
}
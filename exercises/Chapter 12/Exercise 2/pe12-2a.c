// pe12-2a.c 

#include <stdio.h>

static int mode = 0;
static float distance;
static float fuel_consumed;

void set_mode(int mode_i)
{
    if(mode_i != 0 && mode_i != 1)
    {
        printf("You entered invalid mode. Program will use the most recent one.\n");
        printf("Program uses European Mode by default.\n");
    }
    else
    {
        mode = mode_i;
    }
}

void get_info(void)
{

    // MODE 0: Metric Mode (liters per 100 km) 
    // MODE 1: US Mode     (miles  per gallon)

    if(mode == 0)
    {
        printf("Please enter distance you traveled in km: ");
        scanf("%f", &distance);
        printf("Please enter the number of liters consumed: ");
        scanf("%f", &fuel_consumed);
    }
    else
    {
        printf("Please enter distance you traveled in miles: ");
        scanf("%f", &distance);
        printf("Please enter the number of gallons consumed: ");
        scanf("%f", &fuel_consumed);
    }
}

void show_info(void)
{
    float consumption = 0;

    if(mode == 0)
    {
        consumption = (100 / distance) * fuel_consumed;
        printf("Your fuel consumption is %.2f liters per 100 km.\n", consumption);
    }
    else
    {
        consumption = distance / fuel_consumed;
        printf("Your fuel consumption is %.2f miled per gallon.\n", consumption);
    }
}

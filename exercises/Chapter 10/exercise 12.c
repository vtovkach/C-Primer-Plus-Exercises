/* Programming Exercise 1 */

#include <stdio.h>

#define MONTHS 12
#define YEARS   5

// finds yearly total, yeartly avg, monthly avg 

void calc_year_total(const float rain[][MONTHS], int rows, float *subtot, float *total);

void calc_month_avg(const float rain[][MONTHS], int rows, float *subtot, float *total);

int main(void)
{
    const float rain[YEARS][MONTHS] = 
    {
        {4.3, 4.3, 4.4, 3.0, 2, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };

    float subtot = 0;
    float total = 0;    

    printf(" Year RAINFALL (inches)\n");

    calc_year_total(rain, YEARS, &subtot, &total);

    printf("\n The yearly average is %.1f inches.\n\n", total/subtot); 

    printf(" MONTHLY AVERAGE:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    calc_month_avg(rain, YEARS, &subtot, &total);

    printf("\n");

    return 0;
}

void calc_year_total(const float rain[][MONTHS], int rows, float *subtot, float *total)
{
    for(int year = 0; year < YEARS; ++year)
    {
        for(int month = 0; month < MONTHS; ++month)
        {
            *subtot += rain[year][month];
        }
        printf("%5d %15.1f\n", 2010 + year, *subtot);
        *total += *subtot;
        *subtot = 0;
    }
}

void calc_month_avg(const float rain[][MONTHS], int rows, float *subtot, float *total)
{
    for(int month = 0; month < MONTHS; ++month)
    {
        for(int year = 0; year < YEARS; ++year)
        {
            *subtot += rain[year][month];
        }
        printf("%4.1f ", *subtot/YEARS);
        *subtot = 0;
    }
}
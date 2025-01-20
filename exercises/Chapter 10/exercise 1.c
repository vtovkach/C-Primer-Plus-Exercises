/* Programming Exercise 10.1 */

#include <stdio.h>
#define MONTHS 12
#define YEARS   5

int main(void)
{
    const float rain[YEARS][MONTHS] = 
    {
        {4.3, 3.3, 4.4, 4,4,4,4,4,4,4},
        {3,3,3,3,3,3,3,3,3,3,3,3},
        {1,1,1,1,1,1,1,1,1,1,1,1},
        {5,5,5,5,5,5,5,5,5,5,5,5},
        {8,7,7,7,7,7,7,7,7,7,7,7}
    };

    int year;
    int month;
    float subtot;
    float total;

    //float (*ptr)[MONTHS] = rain;

    printf("  YEAR   RAINFALL   (inches)\n");
    for(year = 0, total = 0; year < YEARS; year++)
    {
        float *ptr = *(rain + year);
        for(month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += *(ptr + month); 
        }
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }

    printf("\nThe yearly average is %.f inches.\n\n", total/YEARS);
    printf("MONTHLY AVERAGES: \n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for(month = 0; month < MONTHS; ++month)
    {
        for(year = 0; year < YEARS; ++year)
        {
            subtot += *( *(rain + year) + month);
        } 
        printf("%4.1f ", subtot/YEARS);       
    }
    printf("\n");

    return 0;
}

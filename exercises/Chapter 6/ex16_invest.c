#include <stdio.h>

#define SIMPLE_INTEREST      0.1
#define COMPOUND_INTEREST    0.05
#define INVESTMENT           100

int main(void)
{
    int number_years = 0; 
    double simple_investment = INVESTMENT;
    double compound_investment = INVESTMENT;

    while(compound_investment <= simple_investment)
    {
        simple_investment += INVESTMENT * SIMPLE_INTEREST;
        compound_investment+= compound_investment * COMPOUND_INTEREST;
        number_years++;
    }
    printf("It would take %d years, for Deirdre's investemet to exceed the Daphne's.\n", number_years);
    printf("After %d years, Deirdre has $%.2lf\n", number_years, compound_investment);
    printf("After %d years, Daphne has $%.2lf\n", number_years, simple_investment);

    return 0;
}
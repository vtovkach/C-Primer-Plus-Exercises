/* Programming Exercise 7.10 */

#include <stdio.h>

#define SINGLE              17850.0
#define HEAD_OF_HOUSEHOLD   23900.0
#define MARRIED_JOINT       29750.0
#define MARRIED_SEPARATE    14875.0

#define BASE_TAX            0.15
#define PROGRESSIVE_TAX     0.28

float calculateTax(float income, float category_amount);

int main(void)
{
    float income; 
    float tax;
    int category;
    
    printf("Please specify tax category: \n");
    printf("1) Single          2) Head of Household\n");
    printf("3) Married, Joit   4) Married, Separate\n");
    scanf("%d", &category);

    printf("Now, please, type your income: ");
    while(scanf("%f", &income) == 1)
    {
        switch(category)
        {
            case 1:
                tax = calculateTax(income, SINGLE);
                break;
            case 2:
                tax = calculateTax(income, HEAD_OF_HOUSEHOLD);
                break;
            case 3:
                tax = calculateTax(income, MARRIED_JOINT);
                break;
            case 4:
                tax = calculateTax(income, MARRIED_SEPARATE);
                break;
        }
        printf("Your tax is %.2f\n", tax);
        printf("Type your income again (q to exit): ");
    }
    printf("Goodbye!\n");

    return 0;
}

float calculateTax(float income, float category_amount)
{
    float tax = 0;

    if(income > category_amount)
    {
        tax = category_amount * BASE_TAX;
        tax+= (income - category_amount) * PROGRESSIVE_TAX;
    }
    else
    {
        tax = income * BASE_TAX;
    }

    return tax;
}
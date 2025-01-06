/* Programming Exercise 7.7 */

#include <stdio.h>

#define BASIC_PAY_RATE  10.00
#define TAX_RATE1       0.15
#define TAX_RATE2       0.20
#define TAX_RATE3       0.25

int main(void)
{
    float hours_worked;
    float gross_pay = 0;
    float taxes = 0;
    float net_pay = 0;

    printf("Enter how many hours you worked: ");
    scanf("%f", &hours_worked);

    // gross pay calculations 
    if(hours_worked > 40)
    {
        gross_pay = 40 * BASIC_PAY_RATE;
        gross_pay += (hours_worked - 40) * 1.5 * BASIC_PAY_RATE;
    }
    else
        gross_pay = hours_worked * BASIC_PAY_RATE;

    // taxes calculations s
    if(gross_pay > 450)
    {
        taxes+= 300 * TAX_RATE1;
        taxes+= 150 * TAX_RATE2;
        taxes+= (gross_pay - 450) * TAX_RATE3;
    }
    else if(gross_pay > 300)
    {
        taxes+= 300 * TAX_RATE1;
        taxes+= (gross_pay - 300) * TAX_RATE2;
    }
    else
        taxes+= gross_pay * TAX_RATE1;
    
    net_pay = gross_pay - taxes;

    printf("Your gross pay: %.2f\n", gross_pay);
    printf("Your taxes: $%.2f\n", taxes);
    printf("Your net pay: $%.2f\n", net_pay);

    return 0;
}
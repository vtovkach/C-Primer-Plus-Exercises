/* Programming Exercise 7.8 */

#include <stdio.h>

#define PAY_RATE_ONE    8.75
#define PAY_RATE_TWO    9.33
#define PAY_RATE_THREE  10.00
#define PAY_RATE_FOUR   11.20

#define TAX_RATE1       0.15
#define TAX_RATE2       0.20
#define TAX_RATE3       0.25

float calculateGross(float hours_worked, float pay_rate);
float calculateTax(float gross_pay);

int main(void)
{
    float hours_worked;
    float gross_pay = 0;
    float taxes = 0;
    float net_pay = 0;
    int selection; 

    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate of action:\n");
    printf("1.) $%4.2f\\hr      2.) $%4.2f\\hr \n", PAY_RATE_ONE, PAY_RATE_TWO);
    printf("3.) $%5.2f\\hr     4.) $%5.2f\\hr \n", PAY_RATE_THREE, PAY_RATE_FOUR);
    printf("5.) quit\n");
    printf("*****************************************************************\n");

    while(scanf("%d", &selection), selection != 5)
    {
        if(selection == 5)
        {
            break;
        }
        else if(selection < 1 || selection > 5)
        {
            printf("*****************************************************************\n");
            printf("Please select proper choice from below:\n");
            printf("1.) $8.75\\hr      2.) $9.33\\hr \n");
            printf("3.) $10.00\\hr     4.) $11.20\\hr \n");
            printf("5.) quit\n");
            printf("*****************************************************************\n");
            continue;
        }

        printf("Now, enter how many hours you worked: ");
        scanf("%f", &hours_worked);
        switch (selection)
        {
        case 1:
            gross_pay = calculateGross(hours_worked, PAY_RATE_ONE);
            break;
        case 2:
            gross_pay = calculateGross(hours_worked, PAY_RATE_TWO);
            break;
        case 3:
            gross_pay = calculateGross(hours_worked, PAY_RATE_THREE);
            break;
        case 4:
            gross_pay = calculateGross(hours_worked, PAY_RATE_FOUR);
        }

        taxes = calculateTax(gross_pay);
        net_pay = gross_pay - taxes;
        printf("Your gross pay: %.2f\n", gross_pay);
        printf("Your taxes: $%.2f\n", taxes);
        printf("Your net pay: $%.2f\n", net_pay);

        printf("\n****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate of action:\n");
        printf("1.) $%4.2f\\hr      2.) $%4.2f\\hr \n", PAY_RATE_ONE, PAY_RATE_TWO);
        printf("3.) $%5.2f\\hr     4.) $%5.2f\\hr \n", PAY_RATE_THREE, PAY_RATE_FOUR);
        printf("5.) quit\n");
        printf("*****************************************************************\n"); 
    }
    printf("Goodbye!\n");

    return 0;
}

float calculateGross(float hours_worked, float pay_rate)
{
    int gross_pay = 0;
    
    if(hours_worked > 40)
    {
        gross_pay = hours_worked * pay_rate;
        gross_pay+= (hours_worked - 40) * 1.5 * pay_rate;
    }
    else
        gross_pay = hours_worked * pay_rate;

    return gross_pay;
}

float calculateTax(float gross_pay)
{
    float taxes = 0; 

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

    return taxes;
}
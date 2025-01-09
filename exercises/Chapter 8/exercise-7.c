/* Programming Exercise 8.7 */

#include <stdio.h>
#include <ctype.h>

#define PAY_RATE_ONE    8.75
#define PAY_RATE_TWO    9.33
#define PAY_RATE_THREE  10.00
#define PAY_RATE_FOUR   11.20

#define TAX_RATE1       0.15
#define TAX_RATE2       0.20
#define TAX_RATE3       0.25

float calculateGross(float hours_worked, float pay_rate);
float calculateTax(float gross_pay);
char get_first(void);

int main(void)
{
    float hours_worked;
    float gross_pay = 0;
    float taxes = 0;
    float net_pay = 0;
    char selection; 

    printf("*****************************************************************\n");
    printf("Enter the letter corresponding to the desired pay rate of action:\n");
    printf("a.) $%4.2f\\hr      b.) $%4.2f\\hr \n", PAY_RATE_ONE, PAY_RATE_TWO);
    printf("c.) $%5.2f\\hr     d.) $%5.2f\\hr \n", PAY_RATE_THREE, PAY_RATE_FOUR);
    printf("f.) quit\n");
    printf("*****************************************************************\n");

    while(selection = get_first(), selection != 'f')
    {
        if(selection == 'f')
        {
            break;
        }
        else if(selection < 'a' || selection > 'f')
        {
            printf("*****************************************************************\n");
            printf("Please select proper choice from below:\n");
            printf("a.) $8.75\\hr      b.) $9.33\\hr \n");
            printf("c.) $10.00\\hr     d.) $11.20\\hr \n");
            printf("f.) quit\n");
            printf("*****************************************************************\n");
            continue;
        }

        printf("Now, enter how many hours you worked: ");
        scanf("%f", &hours_worked);

        switch (selection)
        {
        case 'a':
            gross_pay = calculateGross(hours_worked, PAY_RATE_ONE);
            break;
        case 'b':
            gross_pay = calculateGross(hours_worked, PAY_RATE_TWO);
            break;
        case 'c':
            gross_pay = calculateGross(hours_worked, PAY_RATE_THREE);
            break;
        case 'd':
            gross_pay = calculateGross(hours_worked, PAY_RATE_FOUR);
        }

        taxes = calculateTax(gross_pay);
        net_pay = gross_pay - taxes;
        printf("Your gross pay: %.2f\n", gross_pay);
        printf("Your taxes: $%.2f\n", taxes);
        printf("Your net pay: $%.2f\n", net_pay);

        printf("\n****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate of action:\n");
        printf("a.) $%4.2f\\hr      b.) $%4.2f\\hr \n", PAY_RATE_ONE, PAY_RATE_TWO);
        printf("c.) $%5.2f\\hr     d.) $%5.2f\\hr \n", PAY_RATE_THREE, PAY_RATE_FOUR);
        printf("f.) quit\n");
        printf("*****************************************************************\n"); 
    }
    printf("Goodbye!\n");

    return 0;
}

char get_first(void)  // returns first non-space character 
{
    char ch; 

    do
    {
        ch = getchar();
        if(ch == EOF)
        {
            return EOF;
        }
    } while(isspace(ch));

    while(getchar() != '\n')
        ;
    
    return ch;
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

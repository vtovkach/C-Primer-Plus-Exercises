/* Programming Exercise 9.10 */

#include <stdio.h>

void to_base_n(unsigned long, unsigned int);

void get_user_input(unsigned long*, unsigned int*);

int main(void)
{
    unsigned long input_num;
    unsigned int  base;
    char ch;

    printf("Please, enter number and the corresponding base!\n");
    printf("Permitted base range is from 2 to 9.\n");

    do
    {   
        printf("Num and Base: ");
        get_user_input(&input_num, &base);

        printf("%ld in base %u is ", input_num, base);
        to_base_n(input_num, base);
        printf("\n");

        printf("Enter \'q\' to quit, \'c\' to continue!\n");
    } while((ch = getchar()) != 'q');

    return 0;
}

void to_base_n(unsigned long n, unsigned int base)
{ 
    if(base > 9 || base < 2)
    {
        printf("Base is not in the permitted range (2-9).\n");
        return;
    }

    int r;

    r = n % base;
    if(n >= base)
    {
        to_base_n(n / base, base);
    }

    putchar('0' + r);
}

void get_user_input(unsigned long *num, unsigned int *base)
{
    while(scanf("%ld %u", num, base), *base < 2 && *base > 9)
    {
        printf("Base is not in the permitted range (2-9).\n");
        printf("Please enter number and base again: ");
    }

    while(getchar() != '\n');
}
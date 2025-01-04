#include <stdio.h>

const float INTEREST = 0.08;
const int PRIZE = 1000000;

int main(void)
{
    double money = PRIZE;
    int years = 0;

    while(money > 0)
    {
        money += money * INTEREST;
        money -= 100000;
        years++;
    }
    printf("It would take %d years to empty account\n", years);
    printf("After %d years, he would have $%.2lf.\n", years, money);
    
    return 0;
}
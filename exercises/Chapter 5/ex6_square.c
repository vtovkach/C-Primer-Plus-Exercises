#include <stdio.h>

int main(void)
{
    int sum = 0;
    int count = 0; 
    int lim;

    printf("Enter number for the loop limit: ");
    scanf("%d", &lim);
    while(count++ < lim)
    {
        sum = sum + count*count;
    }
    printf("The sum is %d\n", sum);

    return 0;
}
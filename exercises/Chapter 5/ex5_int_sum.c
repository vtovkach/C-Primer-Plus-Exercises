#include <stdio.h>

int main()
{
    int sum = 0;
    int count = 0;
    int limit;

    printf("Enter the number to see its summation: ");
    scanf("%d", &limit);
    while(count++ < limit)
    {
        sum = sum + count;
    }
    printf("sum = %d\n", sum);

    return 0;
}
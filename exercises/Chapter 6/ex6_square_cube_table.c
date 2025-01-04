#include <stdio.h>

int main(void)
{
    int lowerLimit;
    int upperLimit;

    printf("Enter the lower limit for the table: ");
    scanf("%d", &lowerLimit);
    printf("Enter the upper limit for the table: ");
    scanf("%d", &upperLimit);

    printf("  Integer  Square  Cube \n");
    for(int i = lowerLimit; i <= upperLimit; i++)
    {
        printf("%9d %7d %5d  ", i, i*i, i*i*i);
        printf("\n");
    }

    return 0;
}

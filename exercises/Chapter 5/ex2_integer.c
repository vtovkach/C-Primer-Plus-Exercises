#include <stdio.h>

int main(void)
{
    int userInteger;    // integer that user inputs 
    int upperLimit;     // loop limit 
    
    printf("Enter an integer: ");
    scanf("%d", &userInteger);
    upperLimit = (userInteger--) + 10;
    while(userInteger++ < upperLimit)       
    {
        printf("%d ",userInteger);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

#define ASCII_BASE 'A'

int main(void)
{
    char userInput; 
    int numberRows; 

    printf("Enter uppercase letter (A-Z): ");
    scanf("%c", &userInput);

    numberRows = userInput - ASCII_BASE;
    for(int i = 0; i <= numberRows; i++)
    {
        // printing leading spaces
        for(int j = 0; j < numberRows - i; j++)
        {
            printf(" ");
        }
        // print ascending characters 
        for(char ch = ASCII_BASE; ch <= ASCII_BASE+i; ch++)
        {
            printf("%c", ch);
        }
        // print descending characters 
        for(char ch = (ASCII_BASE + i) - 1; ch >= 'A'; ch--)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}

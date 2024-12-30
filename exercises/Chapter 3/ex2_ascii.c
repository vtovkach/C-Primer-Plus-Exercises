#include <stdio.h>

int main(void)
{
    char userInput;

    printf("Enter the ascii code value: ");
    scanf("%d", &userInput);

    printf("The corresponding character is %c.\n", userInput);

    return 0;
}

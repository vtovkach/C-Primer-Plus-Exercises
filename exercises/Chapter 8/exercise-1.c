/* Programming Exercise 8.1 */

// Devise a program that counts the number of characters in its input up to the end of file. 

#include <stdio.h>

int main(void)
{
    int number_chars = 0;
    int character;

    while((character = getchar()) != EOF)
    {
        ++number_chars;
    }
    printf("Number of chars is %d.\n", number_chars);

    return 0;
}
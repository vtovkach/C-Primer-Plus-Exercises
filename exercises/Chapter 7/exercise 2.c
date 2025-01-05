/* Programming Exercise 7.2 */

// Write a program that reads input until encoutering #. Have the program print each
// input character and its ASCII decimal code. Print eight character-code pairs per line.
// Suggestion: Use a character count and the modulus operator (%) to print a newline
// character for every eight cycles of the loop.

#include <stdio.h>

int main(void)
{
    char ch; 
    int counter = 0; 

    printf("Enter some text!\n");
    while((ch = getchar()) != '#')
    {
        if(ch == '\n')
        {
            printf("\n");
            counter = 0;       
            continue;
        }
        printf("%c-%d ", ch, ch);
        if(++counter % 8 == 0)
            printf("\n");
    }
    printf("Bye!\n");

    return 0;
}
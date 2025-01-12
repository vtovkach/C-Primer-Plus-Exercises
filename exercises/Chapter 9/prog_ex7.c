/* Programming Exercise 9.7 */

#include <stdio.h>
#include <ctype.h>

#define ALPHABET_BASE 96

int validate_char(char);

int main(void)
{
    char ch; 
    int location;

    while((ch = getchar()) != EOF)
    {
        location = validate_char(ch);    
        if (location != -1)
            printf("Character \'%c\' is letter, its numerical location is %d.\n", ch, location);
        else
            printf("The character is not letter!\n");
    }

    return 0;
}

int validate_char(char ch)
{
    int letter_number;

    if(isalpha(ch))
    {
        letter_number = tolower(ch) - ALPHABET_BASE;     
    }
    else 
    {
        return -1;
    }
}
/* Programming Exercise 11.4 */

#include <stdio.h>
#include <ctype.h>

#define LIM 10 

char *get_s(char *, int);

int main(void)
{
    char string[LIM];
    char *status;

    puts("Enter text: ");

    status = get_s(string, LIM);
    
    if(status)
        printf("Here is the string: %s\n", string);
    else
        puts("No input was entered!");

    return 0;
}

char *get_s(char *dest, int n)
{
    int ch;
    int i = 0;

    while((ch = getchar()), !(isspace(ch)) && i < n - 1)
    {
        *(dest + i) = ch;
        i++;
    }

    // Discard the rest of the line
    if(ch != '\n' && ch != EOF)
    {
        while(getchar() != '\n')
            continue;
    }

    // Add null terminator to the string
    *(dest + i) = '\0';

    // Return NULL if no input was processed 
    if(i == 0)
        return NULL;

    return dest;
}

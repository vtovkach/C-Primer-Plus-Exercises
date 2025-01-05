/* Programming Exercise 7.1 */

// Write a program that reads input until encountering the # character and then reports
// the number of spaces read, the number of newline characters read, and then number of all
// other characters read.

#include <stdio.h>

int main(void)
{
    char ch;
    int spaces = 0;
    int new_line = 0; 
    int other_char = 0;

    while((ch = getchar()) != '#')
    {
        if(ch == '\n')
            ++new_line;
        else if(ch == ' ')
            ++spaces;
        else
            ++other_char;
    }
    printf("Number of spaces is %d\n", spaces);
    printf("Number of new lines is %d\n", new_line);
    printf("Number of all characters is %d\n", other_char);

    return 0;
}
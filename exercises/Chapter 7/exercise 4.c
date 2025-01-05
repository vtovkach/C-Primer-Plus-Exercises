/* Programming Exercise 7.4 */

#include <stdio.h>

int main(void)
{
    char ch; 
    int number_subs = 0;

    printf("Enter characters! (# to stop)\n");
    while((ch = getchar()) != '#')
    {
        if(ch == '\n')
        {
            printf("\nTotal number of substitutions: %d\n", number_subs);
            number_subs = 0;
        }
        else if(ch == '.')
        {
            ++number_subs;
            printf("!");
        }
        else if(ch == '!') 
        {
            ++number_subs;
            printf("!!");
        }
        else 
            putchar(ch);
    }
    printf("Goodbye!\n");

    return 0;
}
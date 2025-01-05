/* Programming Exercise 7.5 */

#include <stdio.h>

int main(void)
{
    char ch; 
    int number_subs = 0;

    printf("Enter characters! (# to stop)\n");
    while((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case '\n':
                printf("\nTotal number of substitutions: %d\n", number_subs);
                number_subs = 0;
                break;

            case '.':
                printf("!");
                ++number_subs;
                break;

            case '!':
                printf("!!");
                ++number_subs;
                break;

            default:
                putchar(ch);
        }
    }
    printf("Goodbye!\n");

    return 0;
}
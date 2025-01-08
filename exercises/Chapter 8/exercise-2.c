/* Programming Exercise 8.2 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int ch;
    int count = 0;
    int is_newline = false;

    printf("Type any string to see ASCII value of every character!\n");

    while((ch = getchar()) != EOF)
    {
        if(count == 10)
        {
            is_newline = true;
            printf("\n");
            count = 0;
        }
        switch (ch)
        {
            case '\n':
                printf("\\n - %d\n", '\n');
                break;
            case '\b':  printf("\\b - %d\n", '\b');
                break;
        }
        if(ch != '\n' && ch != '\b')
            printf("%c - %d ", ch, ch);

        is_newline = false;
        ++count;
    }

    return 0;
}
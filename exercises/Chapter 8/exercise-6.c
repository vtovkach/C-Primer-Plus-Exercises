/* Programming Exercise 8.6 */

#include <stdio.h>
#include <ctype.h>

char get_first(void);

/// 
///   Test 
/// 

int main(void)
{
    char character;

    character = get_first();

    printf("%c\n", character);

    return 0;
}

char get_first(void)
{
    char ch; 

    do
    {
        ch = getchar();
        if (ch == EOF)
        {
            return EOF;
        }        
    } while(isspace(ch));

    while(getchar() != '\n')
        ;

    return ch;
}

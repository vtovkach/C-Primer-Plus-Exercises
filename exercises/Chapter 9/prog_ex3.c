/* Programming Exercise 9.3 */

#include <stdio.h>

void printing(char, int, int);

// Test driver 
int main(void)
{
    printing('a', 3, 5); // works as intended 

    return 0;
}

void printing(char ch, int columns, int rows)
{
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}
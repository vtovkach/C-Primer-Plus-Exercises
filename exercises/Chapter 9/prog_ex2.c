/* Programming Exercise 9.2 */

#include <stdio.h>

void chline(char, int, int);

int main(void)
{
    
    chline('a', 5, 10);

    return 0;
}

void chline(char ch, int i, int j)
{
    for(int counter = 0; counter < i; ++counter)
        printf(".");
    
    for(int counter = i; counter < j; ++counter)
        printf("%c", ch);
}
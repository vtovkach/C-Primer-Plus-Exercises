/* Programming Exercise 8.3 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int uppercase = 0;      // number of uppercase characters 
    int lowercase = 0;      // number of lowercase characters 
    int other = 0;          // number of other characters 

    printf("Enter any line of text!\n");
    while((ch = getchar()) != EOF)
    {
        if(isupper(ch))
            ++uppercase;
        else if(islower(ch))
            ++lowercase;
        else
            ++other;
    }

    printf("Number of uppercase characters: %d\n", uppercase);
    printf("Number of lowercase characters: %d\n", lowercase);
    printf("Number of other characters: %d\n", other);

    return 0;
}
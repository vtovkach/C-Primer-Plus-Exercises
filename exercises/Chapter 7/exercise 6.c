/* Programming Exercise 7.6 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char ch; 
    int num_occur = 0;
    bool is_second = false;

    printf("Enter some text (# to stop)!\n");
    while((ch = getchar()) != '#')
    {
        if(ch == '\n')
        {
            printf("Number of times \"ei\" occured in the text is %d\n", num_occur);
            num_occur = 0;
            is_second = false;
        }
        else if(ch == 'e')
        {
            is_second = true;
        }
        else if(ch == 'i' && is_second == true)
        {
            ++num_occur;
            is_second = false;
        }
        else
            is_second = false;
    }
    printf("Goodbye!\n");

    return 0;
}
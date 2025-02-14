/* Programming Exercise 12. 4 */

#include <stdio.h>

int function();

int main(void)
{
    int temp;
    for(int i = 1; i <= 100; ++i)
    {
        temp = function();
        if((i % 20) == 0)
            putchar('\n');

        printf("%d ", temp);
    }
    putchar('\n');

    return 0;
}

int function()
{
    static int times = 1;
    return times++;
}
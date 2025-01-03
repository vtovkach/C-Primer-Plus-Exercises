#include <stdio.h>

int main()
{
    unsigned int i;
    unsigned int j;
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}

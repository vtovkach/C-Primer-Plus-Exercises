#include <stdio.h>

int main(void)
{
    unsigned int i;             // outer loop iterator 
    unsigned int j;             // inner loop iterator 
    unsigned char character;    // current character to print 

    character = 'A';
    for(i = 0; i < 6; ++i)
    {
        for(j = 0; j <= i; ++j)
        {
            printf("%c", character++);
        }
        printf("\n");
    }

    return 0;
}

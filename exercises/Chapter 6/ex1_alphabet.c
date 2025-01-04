#include <stdio.h>

#define SIZE 26

int main(void)
{
    char alphabet[SIZE];
    int count;
    char character; 

    for(count = 0, character = 'a'; count < SIZE; count++, character++)
    {
        alphabet[count] = character;
    }

    for(count = 0; count < SIZE; ++count)
    {
        printf("%c|", alphabet[count]);
    }
    printf("\n");
    
    return 0;
}
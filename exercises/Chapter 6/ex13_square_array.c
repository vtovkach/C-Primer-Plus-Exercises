#include <stdio.h>

#define ARRAY_SIZE 8

int main(void)
{
    int square_array[ARRAY_SIZE];
    int i;
    // initialize array 
    for(i = 0; i < ARRAY_SIZE; ++i)
    {
        square_array[i] = (i+1) * (i+1);   
    }

    // print array 
    i = 0;
    do
    {
        printf("%d ", square_array[i]);
    } while (++i < ARRAY_SIZE);
    printf("\n");

    return 0;
}
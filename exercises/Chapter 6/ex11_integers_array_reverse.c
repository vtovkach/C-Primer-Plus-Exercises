#include <stdio.h>

#define ARRAY_SIZE 8

int main(void)
{
    int integer_array[ARRAY_SIZE];

    for(int i = 0; i < ARRAY_SIZE; ++i)
    {
        printf("Enter the integer: ");
        scanf("%d", &integer_array[i]);
    }

    for(int i = ARRAY_SIZE-1; i >= 0; --i)
    {
        printf("%d ", integer_array[i]);
    }
    printf("\n");

    return 0;
}
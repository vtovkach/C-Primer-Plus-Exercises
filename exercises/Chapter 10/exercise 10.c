/* Programming Exercise 10.10 */

#include <stdio.h>

#define ARRAY_SIZE 5

void sum_two_array(const int *src_one, const int *src_two, int *target, int size);

int main(void)
{
    int src_one[ARRAY_SIZE] = {1, 2, 3, 4 ,5};
    int src_two[ARRAY_SIZE] = {10, 11, 12, 13, 14};

    int target[ARRAY_SIZE];

    sum_two_array(src_one, src_two, target, ARRAY_SIZE);
    
    printf("Target Array: ");
    for(int i = 0; i < ARRAY_SIZE; ++i)
    {
        printf("%d ", target[i]);
    }

    printf("\n");

    return 0;
}

void sum_two_array(const int *src_one, const int *src_two, int *target, int size)
{
    for(int i = 0; i < size; ++i)
    {
        // used pointer arithmetic 
        *(target + i) = (*(src_one + i) + *(src_two + i)); 
    }
}
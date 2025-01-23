/* Programming Exercise 10.3 */

#include <stdio.h>

// retrieve the largest value stored in the int array 
int max_int(const int *, size_t);

int main(void)
{

    int array[] = { 1, 4, 21, 0, 8, 2, 18};
    size_t size = sizeof(array) / sizeof(array[0]);

    int max_integer = max_int(array, size);

    printf("The largest value from the array is %d.\n", max_integer);

    return 0;
}

int max_int(const int *src, size_t size)
{
    int max = 0; 

    for(int i = 0; i < size; i++)
    {
        if(*(src + i) > max)
            max = *(src + i);
    }

    return max;
}
/* Programming Exercise 10.4 */

#include <stdio.h>

// retrieve the largest value stored in the int array 
int max_int(const double *, size_t);

int main(void)
{

    double array[] = { 1, 4, 21, 0, 8, 2000.44, 180};
    size_t size = sizeof(array) / sizeof(array[0]);

    int max_integer_index = max_int(array, size);

    printf("The index of the largest value in array is %d.\n", max_integer_index);

    return 0;
}

int max_int(const double *src, size_t size)
{
    int max = 0;
    int index;

    for(int i = 0; i < size; i++)
    {
        if(*(src + i) > max)
        {
            max = *(src + i);
            index = i;
        }
    }

    return index;
}
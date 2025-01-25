/* Programming Exercise 10.8 */

#include <stdio.h>

void copy_array_two(double *target, const double *source, size_t size);

int main(void)
{
    double src_array[7] = {1, 2, 3, 4, 5, 6, 7};

    double target_array[3];

    // pass the pointer to the target array
    // pass the address to the third element 
    // pass number of elements to copy 
    copy_array_two(target_array, src_array + 2, 3);
                       
    for(int i = 0; i < 3; ++i)
    {
        printf("%.1lf ", target_array[i]);
    }

    printf("\n");

    return 0;
}

void copy_array_two(double *target, const double *source, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        *(target + i) = *(source + i);
    }
}
/* Programing Exercise 10.6 */

#include <stdio.h>

void reverse(double *, size_t);

int main(void)
{
    double array[] = {1, 2, 3, 4, 5};
    size_t array_size = sizeof(array) / sizeof(*array);

    printf("Original Array: ");
    for(int i = 0; i < array_size; ++i)
    {
        printf("%.1lf ", *(array + i));
    }
    printf("\n");

    reverse(array, array_size);

    printf("Final Array: ");
    for(int i = 0; i < array_size; ++i)
    {
        printf("%.1lf ", *(array + i));
    }
    printf("\n");

    return 0;
}

void reverse(double * src, size_t size)
{
    int current_pos;
    int last_pos;

    for(current_pos = 0, last_pos = size - 1; current_pos < last_pos; ++current_pos, last_pos--)
    {
        double temp = *(src + last_pos);
        
        *(src + last_pos) = *(src + current_pos);
        *(src + current_pos) = temp;
    }

    return;
}
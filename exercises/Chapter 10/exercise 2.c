/* Programming Exercise 10.2 */

#include <stdio.h>

// Array notation
void copy_array_one(double target[], const double source[], size_t size);

// Pointer Notation 
void copy_array_two(double *target, const double *source, size_t size);

// Receives the pointer to the last element of an array as the third formal argument 
void copy_array_three(double *target, const double * source, double *ptr_last);

void display_array(const double *source, size_t size);

int main(void)
{
    double source[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    
    size_t num_elements = sizeof(source) / sizeof(source[0]);

    double target1[num_elements];
    double target2[num_elements];
    double target3[num_elements];

    copy_array_one(target1, source, num_elements);
    copy_array_two(target2, source, num_elements);
    copy_array_three(target3, source, source + num_elements - 1);

    printf("Original Array: ");
    display_array(source, num_elements);
    printf("Target 1: ");
    display_array(target1, num_elements);
    printf("Target 2: ");
    display_array(target2, num_elements);
    printf("Target 3: ");
    display_array(target3, num_elements);

    return 0;
}

void display_array(const double *source, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        printf("%.1lf ", *(source + i));
    }
    printf("\n");
}

void copy_array_one(double target[], const double source[], size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        target[i] = source[i];
    }
}

void copy_array_two(double *target, const double *source, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        *(target + i) = *(source + i);
    }
}

void copy_array_three(double *target, const double * source, double *ptr_last)
{
    double *copy_ptr = ptr_last;
    size_t array_size;

    for(array_size = 0; copy_ptr >= source; ++array_size, --copy_ptr);

    for(array_size--; ptr_last >= source; --array_size, --ptr_last)
    {
        *(target + array_size) = *ptr_last;
    }
}
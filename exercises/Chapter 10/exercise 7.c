/* Programming Exercise 10.7 */

#include <stdio.h>

#define ROWS     2
#define COLUMNS  3

// copy function from the Exercise 2 
void copy_array_two(double *target, const double *source, size_t size);

int main(void)
{
    double source_2D[ROWS][COLUMNS] = {{1.2, 3.7, 9.9}, {0.9, 5.5, 8.7}};

    double target_2D[ROWS][COLUMNS];

    // copying first subarray
    copy_array_two(target_2D, source_2D, COLUMNS);
    
    // copying second subarray
    copy_array_two(target_2D, source_2D, COLUMNS);
    
    return 0;
}

void copy_array_two(double *target, const double *source, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        *(target + i) = *(source + i);
    }
}
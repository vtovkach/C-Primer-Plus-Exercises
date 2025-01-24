/* Programming Exercise 10.7 */

#include <stdio.h>

#define ROWS     3
#define COLUMNS  3

// copy function from the Exercise 2 
void copy_array_two(double *target, const double *source, size_t size);

int main(void)
{
    double source_2D[ROWS][COLUMNS] = {{1.2, 3.7, 9.9}, {0.9, 5.5, 8.7}, {1.1, 6.6, 4.1}};

    double target_2D[ROWS][COLUMNS];

    // copying first subarray
    copy_array_two(*target_2D, source_2D[0], COLUMNS);
    
    // copying second subarray
    copy_array_two(*(target_2D + 1), source_2D[1], COLUMNS);

    // copying third subarray
    copy_array_two(*(target_2D + 2), source_2D[2], COLUMNS);

    // *(target_2D + 2) the same as target_2D[2]; 

    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j < COLUMNS; ++j)
        {
            printf("%.1lf ", target_2D[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void copy_array_two(double *target, const double *source, size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        *(target + i) = *(source + i);
    }
}
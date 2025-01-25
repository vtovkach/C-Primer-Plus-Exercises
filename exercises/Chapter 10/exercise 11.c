/* Programming Exercise 10.11*/

#include <stdio.h>

#define ROW     3
#define COLUMNS  5

void display(const int src[][COLUMNS], int rows);

void arr_double(int src[][COLUMNS], int rows);

int main(void)
{
    int int_array[ROW][COLUMNS] = {{1, 2, 3, 4, 5}, {6, 7, 8, 8, 10}, {11, 12, 13, 14, 15}};

    printf("Original Array: ");
    display(int_array, ROW);

    arr_double(int_array, ROW);

    printf("   Final Array: ");
    display(int_array, ROW);

    return 0;
}

void display(const int src[][COLUMNS], int rows)
{
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < COLUMNS; ++j)
        {
            printf("%d ", *(*(src + i) + j));  // the same as src[i][j];
        }
    }
    printf("\n");
}

void arr_double(int src[][COLUMNS], int rows)
{
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < COLUMNS; ++j)
        {
            // the same as src[i][j] = src[i][j] * 2;
            *(*(src + i) + j) = (*(*(src + i) + j)) * 2;   
        }
    }
}

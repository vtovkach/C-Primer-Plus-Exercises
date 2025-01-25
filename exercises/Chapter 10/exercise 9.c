/* Programming Exercise 10.9 */

#include <stdio.h>

void copy_VLA(int row, int column, double target[row][column], const double src[row][column]);

void display_VLA(int row, int column, double array[row][column]);

int main(void)
{
    double array_one[3][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}}; 
    double array_two[3][5];
 
    copy_VLA(3, 5, array_two, array_one);
    
    printf("Array one is: ");
    display_VLA(3, 5, array_one);
    
    printf("Array two: ");
    display_VLA(3, 5, array_two);

    return 0;
}

void copy_VLA(int row, int column, double target[row][column], const double src[row][column])
{
    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            target[i][j] = src[i][j];
        }
    }
}

void display_VLA(int row, int column, double array[row][column])
{
    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            printf("%.1lf ", array[i][j]);
        }  
    }
    printf("\n");
}
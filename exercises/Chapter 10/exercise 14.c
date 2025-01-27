/* Programming Exercise 10.14 */

// Using Variabel Length Arrays as arguments to functions

#include <stdio.h>

#define ROWS     3
#define COLUMNS  5

void input(int rows, int col, double arr[rows][col]);

// should accept only 1D array;
double compute_set_avg(int colum, const double arr[colum]);

double compute_total_avg(int rows, int col, const double arr[rows][col]);

double find_max(int rows, int colum, const double arr[rows][colum]);

void display(int rows, int colum, const double arr[rows][colum]);

int main(void)
{
    double user_input[ROWS][COLUMNS];

    double set_avg;
    double total_avg;
    double max_value;

    input(ROWS, COLUMNS, user_input);

    for(int i = 0; i < ROWS; ++i)
    {
        set_avg = compute_set_avg(COLUMNS, *(user_input + i));
        printf("The average of set %d is %.1lf\n", i + 1, set_avg);
    }

    total_avg = compute_total_avg(ROWS, COLUMNS, user_input);

    printf("The total average is %.1lf.\n", total_avg);

    max_value = find_max(ROWS, COLUMNS, user_input);

    printf("The largest value is %.1lf\n", max_value);

    return 0;
}

void input(int rows, int col, double arr[rows][col])
{
    double input;

    printf("Enter 3 sets of five floating point values.\n");

    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < col; ++j)
        {
            scanf("%lf", &input);
            arr[i][j] = input;
        }
        printf("Set %d\n", i + 1);
    }
}

double compute_set_avg(int colum, const double arr[colum])
{
    double total = 0;

    for(int i = 0; i < colum; ++i)
    {
        total += arr[i];
    }
    
    return total / colum;  // return average 
}

double compute_total_avg(int rows, int col, const double arr[rows][col])
{
    double total = 0;
    
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < col; ++j)
        {
            total = total + arr[i][j];
        }
    }

    return total / (rows * col);
}

double find_max(int rows, int colum, const double arr[rows][colum])
{
    double max_value = arr[0][0];

    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < colum; ++j)
        {
            if(arr[i][j] > max_value)
            {
                max_value = arr[i][j];
            }
        }
    }
    
    return max_value;
}

void display(int rows, int colum, const double arr[rows][colum])
{
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < colum; ++j)
        {
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }
}
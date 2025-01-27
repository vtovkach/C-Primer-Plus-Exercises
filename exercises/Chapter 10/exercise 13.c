/* Programming Exercise 10.13 */

#include <stdio.h>

#define ROWS     3
#define COLUMNS  5

void input(double arr[][COLUMNS], int rows);

// should accept only 1D array;
double compute_set_avg(const double *arr);

double compute_total_avg(const double arr[][COLUMNS]);

double find_max(const double arr[][COLUMNS]);

void display(const double arr[][COLUMNS], int rows);

int main(void)
{
    double user_input[ROWS][COLUMNS];

    double set_avg;
    double total_avg;
    double max_value;

    input(user_input, ROWS);

    for(int i = 0; i < ROWS; ++i)
    {
        set_avg = compute_set_avg(*(user_input + i));
        printf("The average of set %d is %.1lf\n", i + 1, set_avg);
    }

    total_avg = compute_total_avg(user_input);

    printf("The total average is %.1lf.\n", total_avg);

    max_value = find_max(user_input);

    printf("The largest value is %.1lf\n", max_value);

    return 0;
}

void input(double arr[][COLUMNS], int rows)
{
    double input;

    printf("Enter 3 sets of five floating point values.\n");

    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < COLUMNS; ++j)
        {
            scanf("%lf", &input);
            arr[i][j] = input;
        }
        printf("Set %d\n", i + 1);
    }
}

double compute_set_avg(const double *arr)
{
    double total = 0;

    for(int i = 0; i < COLUMNS; ++i)
    {
        total += arr[i];
    }
    
    return total / COLUMNS;  // return average 
}

double compute_total_avg(const double arr[][COLUMNS])
{
    double total = 0;
    
    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j < COLUMNS; ++j)
        {
            total = total + arr[i][j];
        }
    }

    return total / (COLUMNS * ROWS);
}

double find_max(const double arr[][COLUMNS])
{
    double max_value = arr[0][0];

    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j < COLUMNS; ++j)
        {
            if(arr[i][j] > max_value)
            {
                max_value = arr[i][j];
            }
        }
    }
    
    return max_value;
}

void display(const double arr[][COLUMNS], int rows)
{
    for(int i = 0; i < ROWS; ++i)
    {
        for(int j = 0; j < COLUMNS; ++j)
        {
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }
}
/* Programming Exercise 10.13 */

#include <stdio.h>

#define ROWS     3
#define COLUMNS  2

void input(double arr[][COLUMNS], int rows);

// should accept only 1D array;
void compute(const double *arr, double *subt, double *total);

void compute_all_avg();

void find_max();

void display_result();

void display(const double arr[][COLUMNS], int rows);

int main(void)
{
    double user_input[ROWS][COLUMNS];

    double subtotal;
    double total;

    input(user_input, ROWS);

    for(int i = 0; i < ROWS; ++i)
    {
        compute(*(user_input + i), &subtotal, &total);
        printf("The average of set %d is %.1lf\n", i + 1, subtotal / COLUMNS);
    }

    //display(user_input, ROWS);

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

void compute(const double *arr, double *subt, double *total)
{
    // reset subtotal
    *subt = 0;

    for(int i = 0; i < COLUMNS; ++i)
    {
        *subt += arr[i];
    }
    *total += *subt;
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
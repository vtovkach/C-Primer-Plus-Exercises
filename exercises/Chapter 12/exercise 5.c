/* Programming Exercise 12.5 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100 

int random_num(int, int);

void sort_nums(int *, int);

int main(void)
{
    srand(time(NULL));

    int random_nums[ARRAY_SIZE];

    for(int i = 0; i < ARRAY_SIZE; ++i)
    {
        random_nums[i] = random_num(1, 10);
    }

    sort_nums(random_nums, ARRAY_SIZE);

    for(int i = 0; i < ARRAY_SIZE; ++i)
    {
        if((i % 20) == 0)
            putchar('\n');

        printf("%d ", random_nums[i]);
    }

    return 0;
}

int random_num(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

void sort_nums(int *nums, int size)
{
    // Bubble Sort Algorithm 

    int temp;
    int i;
    int j;

    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(*(nums + j) > *(nums + j + 1))
            {
                temp = *(nums + j);
                *(nums + j) = *(nums + j + 1);
                *(nums + j + 1) = temp;
            }
        }
    }
}
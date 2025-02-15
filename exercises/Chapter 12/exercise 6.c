/* Programming Exercise 12.6 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_NUMS 1000
#define MIN        1
#define MAX        10

int get_random_num(int, int);

int main(void)
{
    srand(time(NULL));

    int occurances[MAX] = {0};  // Initialize array with 0s
    int rand_num;

    for(int i = 0; i < TOTAL_NUMS; ++i)
    {
        rand_num = get_random_num(MIN, MAX);
        printf("%d ", rand_num);
        occurances[rand_num - 1] = occurances[rand_num - 1] + 1; 
    }

    putchar('\n');

    for(int i = 0; i < MAX; ++i)
    {
        printf("Number %d was generated %d times.\n", i + 1, occurances[i]);
    }

    return 0;
}

int get_random_num(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

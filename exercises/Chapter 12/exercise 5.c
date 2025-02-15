/* Programming Exercise 12.5 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100 

int random_num(int, int);

int main()
{
    int random_num[ARRAY_SIZE];

    for(int i = 0; i < ARRAY_SIZE; ++i)
    {
        random_num[i] = random_num(1, 10);
    }

    return 0;
}


int random_num(int min, int max)
{
    srand(time(NULL));

    return 10;
}
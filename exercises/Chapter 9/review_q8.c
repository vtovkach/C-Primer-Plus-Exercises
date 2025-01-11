/* Review Question 9.8 */

// write a function that returns the largest of three integer arguments 

#include <stdio.h>

int maxi(int, int, int);

int main(void)
{
    int max;

    max = maxi(3, 4, 1);

    printf("Max value is %d\n", max);

    return 0;
}

int maxi(int a, int b, int c)
{
    int max = a;

    if(b > a)
        max = b;
    if(c > a)
        max = c; 

    return max;
}
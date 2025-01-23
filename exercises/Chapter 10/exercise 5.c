/* Programming Exercise 10.5 */

#include <stdio.h>

// retrieve the difference between the largest and smallest elements 
double diff_high_low(const double *, size_t);

int main(void)
{

    double array[] = { 2.2, 17.8, 23.1, 5.8, 0.1, 2.9, 11.3, 17.5, 100.8};
    size_t array_size = sizeof(array) / sizeof(*array);

    double difference = diff_high_low(array, array_size);

    printf("The difference between the largest and smallest elements is %.1lf.\n", difference);

    return 0;
}

double diff_high_low(const double *src, size_t size)
{
    double high = *src;
    double low = *src;

    for(int i = 0; i < size; ++i)
    {
        if(*(src + i) > high)
            high = *(src + i);
        if(*(src + i) < low)
            low = *(src + i);
    }

    return (high - low);
}
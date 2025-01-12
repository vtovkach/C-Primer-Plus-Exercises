/* Programming Exercise 9.11 */

#include <stdio.h>

int fibonacci(int);

int main(void)
{
    int result;     // result obtained from fibonaccii func
    int nth;        // user's input, fibancci's term

    printf("Enter nth term of fibonacci: ");
    while(scanf("%d", &nth) == 1)
    {
        result = fibonacci(nth);
        printf("Here is the fibonacci number: %d\n", result);
        printf("type q to quit or, enter another term: ");
    }

    return 0;
}

int fibonacci(int nth)
{
    int sum = 0;
    int prev = 1;
    int current = 1;

    if(nth == 1 || nth == 2)
    {
        return 1;
    }

    for(int i = 2; i < nth; ++i)
    {
        sum = prev + current;
        prev = current;
        current = sum;
    }

    return current;
}
#include <stdio.h>

int main(void)
{
    float number;

    printf("Enter floating-point number: ");
    scanf("%f", &number);

    printf("PART A\n"); /* part a */
    
    printf("The input is %.1f\n", number);
    printf("The input is %.1e\n", number);

    printf("PART B\n"); /* part b */

    printf("The input is %+.3f\n", number);
    printf("The input is %.3E\n", number);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int firstOperand;
    int secondOperand;
    int moduloResult;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &secondOperand);
    printf("Now enter the first operand: ");
    scanf("%d", &firstOperand);
    while(firstOperand > 0)
    {
        moduloResult = firstOperand % secondOperand;
        printf("%d %% %d is %d\n", firstOperand, secondOperand, moduloResult);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &firstOperand);
    }
    printf("Done\n");

    return 0;
}
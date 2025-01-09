/* Programming exercise 8.8 */
#include <stdio.h>
#include <stdbool.h>

char get_operation(void);
float get_number(bool is_division, bool is_second);

int main(void)
{
    char operation;
    float number_one;
    float number_two;
    float result;
    bool is_division = false;

    printf("Enter the operation of your choice: \n");
    printf("a. add         s. subtract\n");
    printf("m. multiply    d. divide\n");
    printf("q. quit\n");

    while(operation = get_operation(), operation != 'q')
    {
        if(operation == 'd')
            is_division = true;
        printf("Now, please first number: ");
        number_one = get_number(is_division, false);
        printf("Now, please enter second number: ");
        number_two = get_number(is_division, true);

        switch(operation)
        {
            case 'a': result = number_one + number_two;
                printf("%.1f + %.1f = %.1f\n", number_one, number_two, result);
                break;
            case 's': result = number_one - number_two;
                printf("%.1f - %.1f = %.1f\n", number_one, number_two, result);
                break;
            case 'm': result = number_one * number_two;
                printf("%.1f * %.1f = %.1f\n", number_one, number_two, result);
                break;
            case 'd': result = number_one / number_two;
                printf("%.1f / %.1f = %.1f\n", number_one, number_two, result); 
                break; 
        }

        printf("Enter the operation of your choice: \n");
        printf("a. add         s. subtract\n");
        printf("m. multiply    d. divide\n");
        printf("q. quit\n");
    }
    printf("Goodbye!\n");

    return 0;
}

char get_operation(void)  // return first non-space character 
{
    char ch; 

    ch = getchar();
    while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
    {
        while(getchar() != '\n')
            ; 
        printf("Please enter valid operation\n");
        ch = getchar();
    }

    while(getchar() != '\n')
        ;  

    return ch;
}

float get_number(bool is_division, bool is_second)
{
    float number;
    
    while(scanf("%f", &number), is_division && is_second && number == 0)
    {
        printf("Division by zero is illegal!!!\n");
        printf("Enter another number\n");
    }

    while(getchar() != '\n')
        ;

    return number;
}
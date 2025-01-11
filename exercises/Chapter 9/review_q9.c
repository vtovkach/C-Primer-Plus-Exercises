/* Review Question 9.9 */

#include <stdio.h>

void display_menu(void);

int  get_number(int, int);

void validate_input(int);


int main(void)
{
    int choice; 

    display_menu();
    choice = get_number(1, 4);
    
    validate_input(choice);

    return 0;
}

void display_menu(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files       2) move files\n");
    printf("3) remove files     4) quit\n");
    printf("Enter the number of your choice: ");
}

int get_number(int lower, int upper)
{   
    int number;
    int status; // store scanf return value

    while((status = scanf("%d", &number)) != 1 || number < lower || number > upper)
    {
        if(status == 0)
        {
            number = 4; 
            break;
        }
        display_menu();
    }

    return number;
}

void validate_input(int choice)
{
    switch(choice)
    {
        case 1: printf("system copies file\n");
            break;
        case 2: printf("System moves files\n");
            break;
        case 3: printf("System remove files\n"); 
            break;
        case 4: printf("System quits. Bye!\n");
            break;
    }
}

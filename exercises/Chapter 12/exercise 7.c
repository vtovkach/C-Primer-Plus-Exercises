/* Programming Exercise 12.7 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(int, int);

int main(void)
{
    int sets;
    int sides;
    int dice;
    int status;

    printf("Enter the number of sets; Enter q to stop: ");
    while(scanf("%d", &sets) == 1)
    {

        printf("How many sides and how many dice? ");
        if((status = scanf("%d %d", &sides, &dice)) != 2)
        {
            if(status == EOF)
            {
                break;
            }
            else
            {
                printf("You should have entered an integer.");
                printf("Let's begin again.\n");
                while(getchar() != '\n')
                    continue;
                printf("How many sides? Enter q to stop: ");
                continue;
            }
        }

        printf("Hear is %d ")





    }

    return 0;
}
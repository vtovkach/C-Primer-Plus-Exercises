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

    srand(time(0));

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

        printf("Hear are %d sets of %d %d-sided throws.", sets, dice, sides);
        for(int i = 0; i < sets; ++i)
        {
            if((i % 15) == 0)
                putchar('\n');

            printf("%3d ", roll_dice(sides, dice));
        }
        putchar('\n');

        printf("Enter the number of sets; Enter q to stop: ");
    }
    return 0;
}

int roll_dice(int side, int dice)
{
    int total = 0;
    int random_num;

    for(int i = 0; i < dice; ++i)
    {
        random_num = (rand() % side) + 1;
        total += random_num;
    }
    return total;
}

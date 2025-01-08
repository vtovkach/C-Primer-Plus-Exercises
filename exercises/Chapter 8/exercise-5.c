/* Programming Exercise 8.5 */

#include <stdio.h>

int main(void)
{
    char ch;
    int high = 100;
    int guess = 50;
    int low = 0;
    int secret_number;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a h if my guess is high and with ");
    printf("an l if it is low.\n");
    scanf("%d", &secret_number);

    printf("Is your number %d.\n", guess);
    while(guess != secret_number)
    {
        while(getchar() != '\n');
        
        printf("Low or High: ");
        ch = getchar();
        if(ch == 'h')
        {
            high = guess;
            guess = (high + low) / 2;
        }
        else // ch == 'l'
        {
            low = guess;
            guess = (high + low) / 2;  
        }
        printf("My new guess is %d\n", guess);
    }

    printf("Bingo!!! I knew I could do that!\n");
    
    return 0;
}
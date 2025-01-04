#include <stdio.h>

const int DUNBAR_FRIENDS = 150;

int main(void)
{
    int friends = 5; 
    int weeks = 1;

    // while Rabnut's number of friends <= to Dunbar's number of friends 
    while(friends <= DUNBAR_FRIENDS)
    {
        friends -= weeks;   // nth week number of friends drop weekly 
        friends *= 2;       // also double 
        printf("During week %d Rabnud has %d friends\n", weeks, friends);
        weeks++;
    }

    return 0;
} 
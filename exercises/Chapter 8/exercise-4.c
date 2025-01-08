/* Programming exercise 8.4 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch; 
    float avg;              // average number of characters per word 
    int words = 0;          // number of words 
    int characters = 0;     // number of characters 

    printf("Please, enter any string!\n");
    while((ch = getchar()) != EOF)
    {
        if(isspace(ch))
            ++words;
        else if(ispunct(ch))
            continue;
        else
            ++characters;
    }

    if(characters == 0)
        words = 0;
       
    avg = (float) characters / words;

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Average number of letters per word: %.2f\n", (words == 0) ? 0: avg);

    return 0;
}
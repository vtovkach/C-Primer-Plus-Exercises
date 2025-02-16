/* Programming Exercise 12.9 */

#include <stdio.h>
#include <stdlib.h>

#define STRING_LEN 100

int main(void)
{
    int size;
    char **ptr;
    char *strings;
    int i;

    printf("How many words do you wish to enter? ");
    while (scanf("%d", &size) != 1)
    {
        printf("Error! Let's start from the beginning.\n");
        printf("How many words do you wish to enter? ");
        while(getchar() != '\n'); 
    }
    
    strings = (char *) malloc(size * STRING_LEN * sizeof(char));
    if (strings == NULL)
    {
        printf("Memory allocation failed for strings!\n");
        return -1;
    }

    ptr = (char **) malloc(size * sizeof(char *));
    if (ptr == NULL)
    {
        printf("Memory allocation failed for pointers!\n");
        free(strings);
        return -1;
    }

    printf("Enter %d words now: ", size);
    for (i = 0; i < size; ++i)
    {
        ptr[i] = strings + (i * STRING_LEN);
        scanf("%s", ptr[i]);
    }

    printf("Here are your words:\n");
    for (i = 0; i < size; ++i)
    {
        printf("%s\n", ptr[i]);
    }

    free(ptr);
    free(strings);

    return 0;
}
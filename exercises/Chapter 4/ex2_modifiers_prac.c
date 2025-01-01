#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[40];

    printf("Enter your first name: ");
    scanf("%s", first);
    
    /* part a */
    printf("\"%s\"\n", first);
    /* part b */
    printf("\"%20s\"\n", first);
    /* part c */
    printf("\"%-20s\"\n", first);
    /* part d */
    printf("%*s\n", strlen(first) + 3, first);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[40];
    char last[40];
    int firstSize;
    int lastSize;

    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter your last name: ");
    scanf("%s", last);

    printf("%s %s\n", first, last);

    firstSize = strlen(first);
    lastSize = strlen(last);

    printf("%*d %*d\n\n", firstSize, firstSize, lastSize, lastSize);

    printf("%s %s\n", first, last);
    printf("%-*d %-*d\n\n", firstSize, firstSize, lastSize, lastSize);

    return 0;
}
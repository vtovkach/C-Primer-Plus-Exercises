#include <stdio.h>
#include <string.h>

int main(void)
{
    char userString[1024]; 

    printf("Enter one word string: ");
    scanf("%s", userString);

    for(int i = strlen(userString)-1; i >= 0; --i)
    {
        printf("%c", userString[i]);
    }
    printf("\n");

    return 0;
}

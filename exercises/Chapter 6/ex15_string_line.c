#include <stdio.h>
#include <string.h>

#define STRING_SIZE_MAX 255

int main(void)
{
    char buffer[STRING_SIZE_MAX]; 
    int count = 0;

    printf("Enter line of input: ");
    scanf("%c", &buffer[count]);
    while(buffer[count] != '\n')
    {
        count++;
        scanf("%c", &buffer[count]);
    }
    // print array in reverse order 
    for(count-=1; count >= 0; --count)
    {
        printf("%c", buffer[count]);
    }
    printf("\n");

    return 0;
}
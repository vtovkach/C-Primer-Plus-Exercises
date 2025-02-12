/* Programming Exercises 11-1 */

// Design and test a function that fetches the next n characters from input (including
// blanks, tabs, and newlines), storing the results in an array whose address is passed as an
// argument.


#include <stdio.h>

#define LIM 10

char * get_n_input(char *, int);

int main(void)
{
    char input[LIM];
    char *check;

    printf("Enter some text: ");
    check = get_n_input(input, LIM);

    if (check == NULL)
        puts("Input failed.");
    else
        printf("Here is output: %s\n", input);

    puts("Done.");

    return 0;
}

char *get_n_input(char *dest, int n)
{   
    int ch;
    int i = 0;  

    while((ch = getchar()) != '\0' && ch != EOF && ch != '\n' && i < n - 1)
    {
        dest[i++] = ch;
    }

    dest[i] = '\0';
    
    if(i == 0)
        return NULL;

    return dest;
}

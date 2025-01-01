#include <stdio.h>

#define INCHES 12

int main(void)
{
    float heightInput; 
    float heightFeet;
    char name[40];

    printf("What is your height in inches?\n");
    scanf("%f", &heightInput);
    printf("and what is your name?\n");
    scanf("%s", name);

    heightFeet = heightInput / INCHES;
    
    printf("%s, you are %.3f feet tall\n", name, heightFeet);

    return 0;
}
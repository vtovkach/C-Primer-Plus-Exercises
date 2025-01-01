#include <stdio.h>

#define MEGABYTE 1000000    // bytes in megabyte 
#define MEGABIT  125000     // bytes in megabit 

int main(void)
{
    float downloadTime;
    float downloadSpeed;
    float downloadSize; 

    printf("What is the download speed in Megabits per second: ");
    scanf("%f", &downloadSpeed);
    printf("Enter the size of the file in Megabytes: ");
    scanf("%f", &downloadSize);

    downloadTime = (downloadSize * MEGABYTE) / (downloadSpeed * MEGABIT);

    printf("At %.2f megabits per second, a file of %.2f megabytes\n", downloadSpeed, downloadSize);
    printf("dowloads in %.2f seconds\n", downloadTime);

    return 0;
}
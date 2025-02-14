/* Programming Exercise 12.3 */

// pe12-3b.c

#include <stdio.h>
#include "pe12-3a.h"

int main(void)
{
    int mode = 0;
    int prev_mode;
    float distance;
    float fuel_consumed;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    prev_mode = mode;
    scanf("%d", &mode);
    while(mode >= 0)
    {
        check_mode(&mode, prev_mode);
        get_info(mode, &distance, &fuel_consumed);
        show_info(mode, &distance, &fuel_consumed);
        printf("Enter 0 for metric mode, 1 for US mode");
        printf(" (-1 to quit): ");
        prev_mode = mode;
        scanf("%d", &mode);
    }
    printf("Done.\n");
    
    return 0;
}

#include <stdio.h>

#define CM_FOOT  30.48      // centimeters in one foot
#define IN_FOOT  12         // inches in one foot 

int main(void)
{
    double heightCm;
    double heightInch;
    double heightFeet;

    printf("Enter height in centimeters: ");
    scanf("%lf", &heightCm);
    while(heightCm > 0)
    {
        heightFeet = heightCm / CM_FOOT;
        heightInch = (heightFeet - (int) heightFeet) * IN_FOOT;
        printf("%.1lf cm = %d feet, %.1lf inches\n", heightCm, (int) heightFeet, heightInch);
        printf("Enter height in CM, or enter 0 to exit: ");
        scanf("%lf", &heightCm);
    }

    return 0;
}

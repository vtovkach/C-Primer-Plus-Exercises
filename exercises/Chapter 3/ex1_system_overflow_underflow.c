#include <stdio.h>


/* 
    System Checks:

    Case 1: integer overflow 

    Case 2: floating-point overflow 

    Case 3: floating-point underflow 

    
    int 4 bytes: -2147483648 to 2147483647

    float 4 bytes: 1.175e-38 to 3.402e38

    double 8 bytes: 2.225e-308 to 1.798e308

*/


int main(void)
{   
    /* max + 2 */
    /* max * 10 */
    int case_1_integerOverflow = 21474836449;
    int case_2_integerOverflow = 2147483647 * 10;

    printf("Case 1: Integer overflow: %d\n", case_1_integerOverflow);
    printf("Case 2: Integer overflow: %d\n", case_2_integerOverflow);

    /* max * 1.0e40 */
    float floatOverflow = 1.175e38 * 1.0e40;

    printf("Float overflow: %f\n", floatOverflow);

    float floatUnderflow = 0.12e-100/ 19e-38;

    printf("Float underflow: %f\n", floatUnderflow);

    return 0;
}

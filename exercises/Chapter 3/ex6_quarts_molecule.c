#include <stdio.h>

int main(void)
{   
    int gramsInQuart = 950;
    double waterMoleculeMass = 3.0e-23;
    double waterQuart;                  /* user's input water in quarts */
    double waterMolecule;               /* final number of water molecules */

    printf("Enter water amount in quarts: ");
    scanf("%lf", &waterQuart);

    waterMolecule = (gramsInQuart * waterQuart) * waterMoleculeMass;

    printf("The number of molecules is %e\n", waterMolecule);

    return 0;
}
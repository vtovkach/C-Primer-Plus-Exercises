#include <stdio.h>

#define GALLON  3.785   // liters in one gallon
#define MILE    1.609   // kilometers in one mile 

int main(void)
{
    double milesTraveled;
    double kilometersTraveled;
    double gallonsFuel;         // number of gallons consumed during travel
    double litersFuel;          // number of liters consumed during travel 

    double USConsumption;       // miles-per-gallon 
    double EUConsumption;       // liters-per-100-km

    printf("Enter the number of miles traveled: ");
    scanf("%lf", &milesTraveled);
    printf("Enter the number of gallons of gasoline consumed: ");
    scanf("%lf", &gallonsFuel);

    kilometersTraveled = MILE * milesTraveled;
    litersFuel = GALLON * gallonsFuel;

    USConsumption = milesTraveled / gallonsFuel;
    EUConsumption = litersFuel / (kilometersTraveled / 100);
    
    printf("The US miles-per-gallon consumption is %.1f\n", USConsumption);
    printf("The EU liters-per-100-km consumption is %.1f\n", EUConsumption);

    return 0;
}
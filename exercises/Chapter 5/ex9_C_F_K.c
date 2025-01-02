#include <stdio.h>

#define KELVIN 273.16

void Temperatures(double fahrenheit);

int main(void)
{
    double temperatureInput;

    printf("Enter temperature in fahrenheit: ");
    while(scanf("%lf",&temperatureInput) == 1)
    {
        Temperatures(temperatureInput);
        printf("Enter temperature in fahrenheit: ");
    }
    printf("Done\n");

    return 0;
}

void Temperatures(double fahrenheit)
{
    double celsius = 5.0/9.0 * (fahrenheit - 32.0);
    double kelvin = celsius + KELVIN;

    printf("%.2lf Fahrenheit is %.2lf celsius and %.2lf kelvin\n", fahrenheit, celsius, kelvin);
}
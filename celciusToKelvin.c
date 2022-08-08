#include <stdio.h>
void main()
{
    int tCel, tKel;
    printf("Enter Temperature in Centi: ");
    scanf("%d", &tCel);
    tKel = tCel + 273.15;
    printf("\nTemperature in Kelvin is: %dK\n", tKel);
}
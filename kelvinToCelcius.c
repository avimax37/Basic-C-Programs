#include <stdio.h>
void main()
{
    int tCel, tKel;
    printf("Enter Temperature in Kelvin: ");
    scanf("%d", &tKel);
    tCel = tKel - 273;
    printf("\nTemperature in Celree is: %d\n", tCel);
}
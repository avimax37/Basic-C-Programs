#include <stdio.h>
void main()
{
    int tCel, tFeh;
    printf("Input Temp in Fahrenheit: ");
    scanf("%d", &tFeh);
    tCel = (tFeh - 32) * 5 / 9;
    printf("\nTemp in Celsius is: %dC\n", tCel);
}
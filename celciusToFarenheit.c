#include <stdio.h>

void main()
{
    int tCel, tFeh;
    printf("Input Temp in Degree: ");
    scanf("%d", &tCel);
    tFeh = (tCel * 9 / 5) + 32;
    printf("\nTemp in Fahrenheit is: %dF\n", tFeh);
}
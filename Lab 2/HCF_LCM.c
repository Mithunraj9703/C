#include <stdio.h>
void main()
{
    int a, b, r, min, max;
    printf("Enter the digits: ");
    scanf("%d", &a);
    scanf("%d", &b);
    if (a < b)
    {
        min = a;
        max = b;
    }
    else
    {
        min = b;
        max = a;
    }
    while (r > 0)
    {
        r = max % min;
        max = min;
        min = r;
    }
    printf("HCF = %d", max);
    printf("\nLCM = %d", (a * b) / max);
}
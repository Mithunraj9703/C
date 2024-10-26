#include <stdio.h>
void main()
{
    int bin, dec = 0, r, base = 1;
    printf("Enter binary number: ");
    scanf("%d", &bin);
    while (bin > 0)
    {
        r = bin % 10;
        dec = r * base + dec;
        bin = bin / 10;
        base = base * 2;
    }
    printf("Decimal value:  %d", dec);
}
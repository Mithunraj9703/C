#include <stdio.h>
void main()
{
    int n, r, pow = 1, dec = 0;
    printf("Enter the any decimal no. : ");
    scanf("%d", &n);
    printf("%d in binary form :- ", n);
    while (n > 0)
    {
        r = n % 2;
        n = n / 2;
        dec = r * pow + dec;
        pow = pow * 10;
    }
    printf("%d", dec);
}
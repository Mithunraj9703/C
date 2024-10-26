#include <stdio.h>
void main()
{
    int n, r = 0;
    printf("Enter any element: ");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        r++;
    }
    printf("Total no. of digits = %d", r);
}
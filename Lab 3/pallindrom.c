#include <stdio.h>
void main()
{
    int n, r, sum = 0, m;
    printf("Enter any element: ");
    scanf("%d", &n);
    m = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (m == sum)
    {
        printf("%d is a palindome no.", m);
    }
    else
    {
        printf("%d is not a palindome no.", m);
    }
}
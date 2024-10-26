#include <stdio.h>
void main()
{
    int n, a = 0, b = 1, c = 0;
    printf("Enter last element of series: ");
    scanf("%d", &n);
    printf("Fibonacii numbers are:- \n");
    while (c <= n)
    {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }
}
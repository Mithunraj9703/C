#include <stdio.h>
void main()
{
    int n;
    printf("Enter the three digits no. :- ");
    scanf("%d", &n);
    int a = n % 10;
    int b = n / 100;
    printf("Sum of first and last digits = %d", a + b);
}
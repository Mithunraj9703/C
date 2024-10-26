#include <stdio.h>
void main()
{
    int a;
    printf("Enter the two digit no. : ");
    scanf("%d", &a);
    int c = a % 10;
    a = a / 10;
    c = c * 10 + a;
    printf("Reverse order of the number = %d", c);
}
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    c = b;
    b = a;
    a = c;
    printf("After the interchange :- ");
    printf("\nThe value of a is %d", a);
    printf("\nThe value of b is %d", b);
}
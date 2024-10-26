#include <stdio.h>
void main()
{
    int n;
    printf("Enter any integer value : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is even no.", n);
    }
    else
    {
        printf("%d is odd no.", n);
    }
}
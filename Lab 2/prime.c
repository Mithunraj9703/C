#include <stdio.h>
void main()
{
    int n;
    printf("Enter any integer: ");
    scanf("%d", &n);
    int prime = 1;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime no.", n);
    }
    else
    {
        printf("%d is a prime no.", n);
    }
}
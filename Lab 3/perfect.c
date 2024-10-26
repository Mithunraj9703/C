#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter any element: ");
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
    {
        printf("%d is a perfect no.", n);
    }
    else
    {
        printf("%d is not a perfect no.", n);
    }
}
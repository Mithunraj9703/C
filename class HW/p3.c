#include <stdio.h>
void main()
{
    int n, m = 1;
    printf("enter the no. of raws: ");
    scanf("%d", &n);
    int p = n / 2 + 1;
    for (int i = p; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= 2 * m - 3; j++)
        {
            printf(" ");
        }
        if (i == p)
        {
            for (int j = 1; j <= p - 1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
        m++;
    }
    m -= 2;
    for (int i = 2; i <= p; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= 2 * m - 3; j++)
        {
            printf(" ");
        }
        if (i == p)
        {
            for (int j = 1; j <= p - 1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
        m--;
    }
}
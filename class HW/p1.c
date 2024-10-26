#include <stdio.h>
void main()
{
    int n;
    printf("enter the no. of raws: ");
    scanf("%d", &n);
    int p = n / 2 + 1;
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= p - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (int i = p - 1; i >= 1; i--)
    {
        for (int j = i; j < p; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
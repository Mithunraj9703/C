#include <stdio.h>
void main()
{
    int n;
    printf("Enter the no. of raws: ");
    scanf("%d", &n);
    for (int i = n; i >0; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the no. of raws: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
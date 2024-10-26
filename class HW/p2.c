#include <stdio.h>
void main()
{
    int n, count = 0;
    printf("enter the no. of raws: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%3d", ++count);
        }
        printf("\n");
    }
}
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the order of grid: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 != 0)
            {
                if (j % 2 == 0)
                    printf(" ");
                else
                    printf("*");
            }
            else
            {
                if (j % 2 == 0)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
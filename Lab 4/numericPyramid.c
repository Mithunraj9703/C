// print like : 1-212-32123
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the no. of raws: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf("  ");
        }
        int a = i;
        int b = 1;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (a > 0)
            {
                printf("%d ", a--);
            }
            else
            {
                printf("%d ", ++b);
            }
        }
        printf("\n");
    }
}
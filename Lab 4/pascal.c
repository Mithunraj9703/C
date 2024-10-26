#include <stdio.h>
int facto(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * facto(n - 1);
    }
}
int combination(int a, int b)
{
    return (facto(a) / (facto(b) * facto(a - b)));
}
void main()
{
    int n;
    printf("Enter the no. of raws: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int m = 0;
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 == 0)
            {
                printf(" ");
            }
            else
            {
                int a = i;
                printf("%d", combination(--a, m++));
            }
        }
        printf("\n");
    }
}
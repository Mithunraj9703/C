#include <stdio.h>
void main()
{
    int n, count;
    printf("Enter last element of series: ");
    scanf("%d", &n);
    printf("Prime numbers are:- \n");
    for (int i = 2; i <= n; i++)
    {
        count = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d ", i);
        }
    }
}
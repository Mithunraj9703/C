#include <stdio.h>
void main()
{
    int n, count;
    printf("Enter any element: ");
    scanf("%d", &n);
    printf("Prime factors are:- \n");
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
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
}
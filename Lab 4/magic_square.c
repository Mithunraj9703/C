#include <stdio.h>
void main()
{
    int n, p;
    printf("Enter the odd no. and intial no. ");
    scanf("%d%d", &n, &p);
    int arr[n][n];
    int m = n * n, i, j;
    for (int k = 0; k < m; k++)
    {
        if (k == 0)
        {
            i = (n - 1) / 2;
            j = 0;
            arr[i][j] = p++;
            // printf("i=%d,j= %d, %d\n", i, j, arr[i][j]);
        }
        else if (k % 3 == 0)
        {
            j++;
            if (j > n - 1)
            {
                j = 0;
            }
            arr[i][j] = p++;
            // printf("i=%d,j= %d, %d\n", i, j, arr[i][j]);
        }
        else
        {
            i++;
            j--;
            if (i > n - 1)
            {
                i = 0;
            }
            if (j < 0)
            {
                j = n - 1;
            }
            arr[i][j] = p++;
            // printf("i=%d,j= %d, %d\n", i, j, arr[i][j]);
        }
    }
    printf("Magic Square: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}
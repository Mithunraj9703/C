#include <stdio.h>
void main()
{
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
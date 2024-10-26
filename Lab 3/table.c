#include <stdio.h>
void main()
{
    printf("Tables from 1 to 20 :- \n");
    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}
#include <stdio.h>
void main()
{

    for (int i = 1; i <= 11; i++)
    {
        if (i < 5)
        {
            for (int k = 1; k <= 15 - i; k++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else if (i < 9)
        {
            for (int k = 1; k <= (15 - i) + 3; k++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * (i - 3) - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int k = 1; k <= 13; k++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 3; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
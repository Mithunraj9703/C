#include <stdio.h>
void main()
{
    char c[3];
    printf("Enter the value ABC : ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &c[i]);
    }
    printf("Show in reverse order : ");
    for (int i = 2; i >= 0; i--)
    {
        printf("%c", c[i]);
    }
}
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the no. of raws: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if(j%2==0){
                printf(" ");
            }else{
                printf("%d",i);
            }
        }
        printf("\n");
    }
}
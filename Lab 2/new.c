#include <stdio.h>
void main()
{
    int n = 5;
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Elements are :-");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
#include <stdio.h>
void main()
{
    int n, min;
    printf("Enter total number of element : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements :- \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Smallest number is %d", min);
}
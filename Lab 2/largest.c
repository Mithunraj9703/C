#include <stdio.h>
void main()
{
    int n, max;
    printf("Enter total number of element : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements :- \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Largest number is %d", max);
}
#include <stdio.h>
void main()
{
    int n, sum = 0;
    // float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Total sum = %d", sum);
    printf("\nAverage = %.2f", (float)sum / n);
}
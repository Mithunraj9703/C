#include <stdio.h>
void main()
{
    int days;
    printf("Enter the total number of days : ");
    scanf("%d", &days);
    int y = days / 365;
    days = days % 365;
    int m = days / 30;
    int d = days % 30;
    printf("Total years = %d", y);
    printf("\nTotal months = %d", m);
    printf("\nTotal days = %d", d);
}
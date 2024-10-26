#include <stdio.h>
void main()
{
    int n, h;
    float sal;
    printf("Enter the employee Id : ");
    scanf("%d", &n);
    printf("Enter worked hours in a month : ");
    scanf("%d", &h);
    printf("Enter salary pay per hour : ");
    scanf("%f", &sal);
    printf("Employee id is %d", n);
    printf("Total salary of this month is %.2f", h * sal);
}
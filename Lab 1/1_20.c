#include <stdio.h>
#include <math.h>
void main()
{
    double x1, x2, y1, y2;
    printf("Enter the x1 : ");
    scanf("%lf", &x1);
    printf("Enter the x2 : ");
    scanf("%lf", &x2);
    printf("Enter the y1 : ");
    scanf("%lf", &y1);
    printf("Enter the y2 : ");
    scanf("%lf", &y2);
    printf("Point 1 is (%.2lf,%.2lf)", x1, x2);
    printf("\nPoint 2 is (%.2lf,%.2lf)", y1, y2);
    double d = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0));
    printf("\nDistance between these points = %.2lf", d);
    // printf("%.2lf",pow(4.0,2.0));
    // printf("%.2lf",pow((x2-x1),2.0));
    // printf("%.2lf", sqrt(4));
}
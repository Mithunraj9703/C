#include <stdio.h>
#include <math.h>
void main()
{
    printf("Quadratic equation in the form : f(x)=a*x^2+b*x+c");
    int a;
    int b;
    int c;
    printf("\nEnter the a = ");
    scanf("%d", &a);
    printf("Enter the b = ");
    scanf("%d", &b);
    printf("Enter the c = ");
    scanf("%d", &c);
    int d = (b * b) - (4 * a * c);
    if (d == 0)
    {
        printf("Roots are real and equal.");
        int x = -b / 2 * a;
        printf("\n Root = %d", x);
    }
    else if (d > 0)
    {
        printf("Roots are real and different.");
        double x = (-b + (double)sqrt(d)) / 2 * a;
        double y = (-b - (double)sqrt(d)) / 2 * a;
        printf("\n1st root is = %.2lf", x);
        printf("\n2nd root is = %.2lf", y);
    }
    else
    {
        printf("Roots are imaginary.");
    }
}
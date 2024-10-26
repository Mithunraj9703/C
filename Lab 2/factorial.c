#include <stdio.h>
int facto(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * facto(n - 1);
    }
}
void main()
{
    int n;
    printf("Enter the any number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, facto(n));
}
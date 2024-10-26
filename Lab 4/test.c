#include <stdio.h>
int facto(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * facto(n - 1);
    }
}
int combination(int a, int b)
{
    // printf("%d ", facto(a));
    // printf("%d ", facto(a - b));
    return (facto(a) / (facto(b) * facto(a - b)));
}
int main()
{
    // printf("%d", facto(1));
    printf("%d", combination(0, 0));
}
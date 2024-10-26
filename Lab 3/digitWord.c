#include <stdio.h>
int reverse(int rev)
{
    int r, sum = 0;
    while (rev > 0)
    {
        r = rev % 10;
        sum = sum * 10 + r;
        rev = rev / 10;
    }
    return sum;
}
void main()
{
    int m, r;
    printf("Enter any element: ");
    scanf("%d", &m);
    int n = reverse(m);
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        switch (r)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        }
        printf(" ");
    }
}
#include <stdio.h>
// int main()
// {
//     char str[20];
//     scanf("%[^\n]%*c", str);
//     printf("%s", str);

//     return 0;
// }

int main()
{
    int a, b;
    float c, d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    printf("%d %d", (a + b), (a - b));
    printf("\n%.1f %.1f", (c + d), (c - d));
    return 0;
}

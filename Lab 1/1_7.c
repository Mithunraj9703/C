#include <stdio.h>
void main()
{
    char c;
    printf("Enter any capital letter :- ");
    scanf("%c", &c);
    printf("Small letter of the character = %c", (c + 32));
}
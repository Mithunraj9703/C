#include <stdio.h>
void main()
{
    char c;
    printf("Enter any small letter :- ");
    scanf("%c", &c);
    printf("Capital letter of the character = %c", (c - 32));
}
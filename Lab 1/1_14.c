#include <stdio.h>
void main()
{
    float cel, fer;
    printf("Enter the tempreature in celcius: ");
    scanf("%f", &cel);
    fer = ((float)9 / 5 * cel) + 32;
    printf("The tempreature is %.2f fehranite", fer);
}
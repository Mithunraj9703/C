#include <stdio.h>
void main()
{
    float item1Weight, item2Weight;
    float item1Number, item2Number;
    float avg;
    printf("Enter the weight of item1 in kg : ");
    scanf("%f", &item1Weight);
    printf("Enter the weight of item2 in kg : ");
    scanf("%f", &item2Weight);
    printf("Enter the number of purchase of item1 : ");
    scanf("%f", &item1Number);
    printf("Enter the number of purchase of item2 : ");
    scanf("%f", &item2Number);
    avg = ((item1Number * item1Weight) + (item2Number * item2Weight)) / (item1Number + item2Number);
    printf("Average value of these items : %.2f", avg);
}
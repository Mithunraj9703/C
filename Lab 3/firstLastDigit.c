#include<stdio.h>
void main(){
    int n,r,sum=0;
    printf("Enter any element: ");
    scanf("%d",&n);
    sum=n%10;
    while(n>0){
        n=n/10;
        if(n<10){
            sum+=n;
        }
    }
    printf("Sum of first and last digits = %d",sum);
}
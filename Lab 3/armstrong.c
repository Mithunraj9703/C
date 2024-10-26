#include<stdio.h>
void main(){
    int n,r,sum=0,m;
    printf("Enter any element: ");
    scanf("%d",&n);
    m=n;
    while(n>0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(m==sum){
        printf("%d is a armstrong no.",m);
    }else{
        printf("%d is not a armstrong no.",m);
    }
}
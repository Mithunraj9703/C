#include<stdio.h>
void main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf(" *");
        }
        printf("\n");
    }
}
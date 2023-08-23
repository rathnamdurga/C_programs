#include<stdio.h>
void main(){
    int n,k,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    while(n>0){
        k=n%10;
        sum=sum+k;
        n=n/10;
        }
        printf("%d",sum);
}
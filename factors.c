#include<stdio.h>
void main(){
    int n,i,sum=0,t;
    printf("enter n:");
    scanf("%d",&n);
    t=n;
    printf("the factors of %d\n",n);
    for(i=1;i<n;i++){
        if(n%i==0){
            printf("%d",i);
            sum=sum+i;
        }
    }
    if(t==sum){
        printf("perfect number");
    }
    else{
        printf("not perfect");
    }
}
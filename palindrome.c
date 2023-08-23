#include<stdio.h>
void main(){
    int n,k,t,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    t=n;
    while(n>0){
     k=n%10;
     sum=sum*10+k;
     n=n/10;
    }
    printf("%d",sum);
    if(t==sum){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

}
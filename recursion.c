#include<stdio.h>
int factorial(int);
void main(){
int n,f;
scanf("%d",&n);
f=factorial(n);
printf("%d",f);
}
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

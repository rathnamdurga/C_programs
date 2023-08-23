//this is a program of armstrong number
#include<stdio.h>
#include<math.h>
void main(){
    int n,t,temp,c=0,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        n=n/10;
        c++;
        }
        n=temp;
    while(n>0){
        t=n%10;
        sum=sum+pow(t,c);
        n=n/10;
    }
    printf("%d",sum);
    if(temp==sum){
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
}
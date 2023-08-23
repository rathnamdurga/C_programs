#include<stdio.h>
int add(int,int);
void main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}
int add(int a,int b){
    return a+b;
}
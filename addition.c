#include<stdio.h>
void add();
void main(){
    add();
}
void add(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}

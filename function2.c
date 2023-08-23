#include<stdio.h>
int add();
void main(){
    int c;
    c=add();
    printf("%d",c);
}
int add(){
    int a,b;
    scanf("%d%d",&a,&b);
    return a+b;gc
}
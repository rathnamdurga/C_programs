#include<stdio.h>
void main(){
void Toh(int n,char a,char b,char c);
    int n;
    char s,i,d;
    printf("enter n");
    scanf("%d",&n);
    Toh(n,'s','i','d');
}
void Toh(int n,char a,char b,char c)
{

    if(n==1)
    {
        printf("move disk %d from %c to %c\n",n,a,c);
    }
    else
    {
    Toh(n-1,a,c,b);
    printf("move disk %d from %c to %c\n",n,a,c);
    Toh(n-1,b,a,c);
    }
}
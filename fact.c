#include<stdio.h>
int stack[50];
int top=-1;
void push(int x)
{
    top=top+1;
    stack[top]=x;
}
int pop()
{
    int x;
    x=stack[top];
    top--;
    return x;
}
void main()
{
    int n,t,a,b,i;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        push(i);
    }
    while(top!=0)
    {
    a=pop();
    b=pop();
    t=a*b;
    push(t);
    }
    printf("%d",stack[top]);
}
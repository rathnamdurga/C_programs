#include <stdio.h>
void push(int x);
int pop();
int top =-1;
int stack[50];
void main()
{
    int a,b,res,i,n;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        push(i);
    }
    while(top!=0)
    {
    a=pop();
    b=pop();
    res=a*b;
    push(res);
    }
    printf("%d",stack[top]);
}
void push(int x)
{
        top=top+1;
        stack[top]=x;
}
int pop()
{
        int x = stack[top];
        top--;
        return x;
}

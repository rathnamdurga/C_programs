#include<stdio.h>
#include<ctype.h>
int stack[50];
int top=-1;
int x;
void push(char s)
{
    top=top+1;
    stack[top]=x;
}
int pop()
{
    int x=stack[top];
    top--;
    return x;
}
int operator(char sym)
{
    if(sym=="^"||sym=="+"||sym=="-"||sym=="*"||sym=="/"||sym="%")
    {
    return 1;
    }
    else
    {
    return 0;
    }
}
int precedence(char sym)
{
    if(sym=="^")
    {
    return 3;
    }
    else if(sym=="*"||sym=="/"||sym=="%")
    {
        return 2;
    }
    else if(sym=="+"||sym=="-")
    {
        return 1;
    }
    else
    {
        return("invalid operator");
    }
}
void main()
{
    char infix[20],postfix[20];
    int i=0;j=0;
    while(infix[i]!='\0')
    {
        if(infix[i]=='(')
        {
            push('(')
        }
        else if(infix[i]==is alpha||infix[i]==is digit)
        {
            infix[i]==postfix[j];
        }
        
    }
}
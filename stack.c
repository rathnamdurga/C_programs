#include<stdio.h>
# define N 3
int top=-1;
int stack[N];
void push()
{
    int x;
    if(top==N-1)
    {
        printf("stack is full");
    }
    else
    {
        printf("enter the element to be pushed");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        item=stack[top];
        top--;
        printf("the element deleted is %d\n",item);
    }
}
void peek()
{
    printf("the element in the top is %d",stack[top]);
}
void main()
{
    int ch;
    do
    {
        printf("enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
        default:printf("no such case");

        }
    }while(ch!=0);
}

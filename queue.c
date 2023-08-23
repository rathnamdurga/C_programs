#include<stdio.h>
#define N 3
int front=-1,rear=-1,x;
int queue[N];
void enqueue()
{
    if(rear==N-1)
    {
        printf("overflow");
    }
    else if(rear==-1 && front==-1)
    {
        printf("enter element:");
        scanf("%d",&x);
        front=0;
        rear=0;
        queue[rear]=x;
    }
    else
    {
        printf("enter element");
        scanf("%d",&x);
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else if(rear==front)
    {
        front=-1;
        rear=-1;
    }
    else{
        printf("the element to be deleted is %d\n",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d",queue[i]);
    }
}
void peek()
{
    printf("%d",queue[front]);
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
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:peek();
            break;
            default:printf("no such case");
        }

    }while(ch!=0);
    
}
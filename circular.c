#include<stdio.h>
#define N 4
int front=-1,rear=-1,x;
int queue[N];
void enqueue()
{
    int x;
    if(rear==-1 && front==-1)
    {
        printf("enter pushing element:\n");
        scanf("%d",&x);
        front=0;
        rear=0;
        queue[rear]=x;
    }
    else if(front==(rear+1)%N)
    {
        printf("queue is full\n");
    }
    else
    {
        printf("enter pushing elment:\n");
        scanf("%d",&x);
        rear=rear+1%N;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty\n");
    }
    else if(rear==front)
    {
        printf("element deleted is %d\n",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("the element to be deleted is %d\n",queue[front]);
        front=front+1%N;
    }
}
void display()
{
    int i;
    if(rear==-1 && front==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        i=front;
        do{
            printf("%d",queue[i]);
            i=i+1%N;
        }while(i!=rear+1);
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
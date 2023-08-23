#include<stdio.h>
#define N 5
int front=-1,rear=-1,x,item;
int q1[N],q2[N];
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
        printf("enter priority: ");
        scanf("%d",&item);
        front=0;
        rear=0;
        q1[rear]=x;
        q2[rear]=item;
    }
    else
    {
        printf("enter element");
        scanf("%d",&x);
        printf("enter priority:");
        scanf("%d",&item);
        rear++;
        q1[rear]=x;
        q2[rear]=item;
        int i,t;
        for(i=rear;i>0;i--)
        {
            if(q2[i-1]<q2[i])
            {
                t=q2[i];
                q2[i]=q2[i-1];
                q2[i-1]=t;
                t=q1[i];
                q1[i]=q1[i-1];
                q1[i-1]=t;
                
            }
           else
           break; 
        }
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
        printf("the element to be deleted is %d\n",q1[front]);
        front++;
    }
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",q1[i]);
    }
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",q2[i]);
    }
}
void peek()
{
    printf("%d",q1[front]);
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
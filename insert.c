#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*new,*temp,*prev;
void begin()
{
    new=(struct node*)malloc(sizeof (struct node));
    printf("enter data");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
}
void end()
{
    new=(struct node*)malloc(sizeof (struct node));
    printf("enter data");
    scanf("%d",&new->data);
    new->next=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=new;
}
void position()
{
    new=(struct node*)malloc(sizeof (struct node));
    int i,pos,count;
    temp=head;
    printf("enter position");
    scanf("%d",&pos);
    printf("enter data");
    scanf("%d",&new->data);
    if(count<pos)
    {
        printf("invalid");
    }
    else
    {
        while(i<pos)
        {
            prev=temp;
            temp=temp->next;
            i++;
        }
    }
    new->next=temp;
    prev->next=new;
}
void delbegin()
{
    new=(struct node*)malloc(sizeof (struct node));
    temp=head;
    head=head->next;
    free(temp);
}
void delend()
{
    new=(struct node*)malloc(sizeof (struct node));
    temp=head;
    while(temp->next==0)
    {
        prev=temp;
        temp=temp->next;
    }
    if(head->next==0)
    {
        head=0;
    }
    else{
        prev->next=0;
    }
    free(temp);
}
void delposition()
{
    new=(struct node*)malloc(sizeof (struct node));
    int i=1,pos;
    printf("enter position");
    scanf("%d",&pos);
    temp=head;
    while(i<pos)
    {
        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=temp->next;
    free(temp);
} 
void display()
{
    temp=head;
    while(temp!=0)
   {
    printf("%d\t",temp->data);
    temp=temp->next;
   }
}
void main()
{
int ch;
head=0;
do
{
    new=(struct node*)malloc(sizeof (struct node));
    printf("enter data");
    scanf("%d",&new->data);
    new->next=0;
    if(head==0)
    {
        head=temp=new;
        temp=new;
    }
    else
    {
        temp->next=new;
        temp=new;
    }
    printf("enter 0 to stop");
    scanf("%d",&ch);
}while(ch!=0);
temp=head;
do
{
    printf("enter choice");
    scanf("%d",&ch);
    switch(ch){
        case 1:begin();
        break;
        case 2:end();
        break;
        case 3:position();
        break;
        case 4:delbegin();
        break;
        case 5:delend();
        break;
        case 6:delposition();
        break;
        case 7:display();
        break;
        default:printf("no such case");
    }
}while(ch!=0);
}

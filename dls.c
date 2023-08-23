#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node*prev;
};
struct node *head,*new,*temp,*tail,*temp1,*temp2;
int count=0;
void begin()
{
    new=(struct node*)malloc(sizeof (struct node));
    printf("enter data");
    scanf("%d",&new->data);
    new->next=0;
    new->prev=0;
    head->prev=new;
    new->next=head;
    head=new;
    count++;
}
void end()
{
    new=(struct node*)malloc(sizeof (struct node));
    printf("enter data");
    scanf("%d",&new->data);
    new->next=0;
    new->prev=tail;
    tail->next=new;
    tail=new;
    count++;
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

        while(i<pos)
        {
            temp1=temp;
            temp=temp->next;
            i++;
        }
    temp1->next=new;
    new->prev=temp1;
    new->next=temp;
    temp->prev=new;
    count++;
}
void delbegin()
{
    new=(struct node*)malloc(sizeof (struct node));
    temp=head;
    head=head->next;
    head->prev=0;
    free(temp);
    count--;
}
void delend()
{
    new=(struct node*)malloc(sizeof (struct node));
    temp=tail;
    tail=tail->prev;
    tail->next=0;
    free(temp);
    count--;
}
void delposition()
{
    new=(struct node*)malloc(sizeof (struct node));
    int i=0,pos;
    printf("enter position");
    scanf("%d",&pos);
    temp=head;
    if(count<pos){
        printf("Invalid");
    }
    else{
    while(i<pos)
    {
        // temp1=temp;
        temp=temp->next;
        i++;
    }
    // temp2=temp->next;
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    free(temp);
    count--;
    }
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
tail=0;
do
{
    new=(struct node*)malloc(sizeof (struct node));
    printf("enter data");
    scanf("%d",&new->data);
    new->next=0;
    new->prev=0;
    if(head==0)
    {
        head=tail=new;
        count++;
    }
    else
    {
        tail->next=new;
        new->prev=tail;
        tail=new;
        count++;
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

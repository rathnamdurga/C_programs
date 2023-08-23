#include<stdio.h>
void quick(int l[20],int lb,int ub);
int partition(int l[20],int lb,int ub);
void main()
{
    int n,i,lb,ub;
    int l[20];
    printf("enter n");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }
    lb=0;
    ub=n-1;
    quick(l,lb,ub);
    for(i=0;i<n;i++)
    {
        printf("%d ",l[i]);
    }
}
void quick(int l[20],int lb,int ub)
{
    int pos;
    if(lb<ub)
    {
    pos=partition(l,lb,ub);
    quick(l,lb,pos-1);
    quick(l,pos+1,ub);
    }
}
int partition(int l[20],int lb,int ub)
{
    int pivot=l[lb];
    int start=lb;
    int end=ub;
    int t,p;
    while(start<end)
    {
        if(l[start]<pivot && start<=ub )
        {
        start++;
        }
        if(l[end]>pivot && end>=lb)
        {
            end--;
        }
        if(start<end)
        {
            t=l[start];
            l[start]=l[end];
            l[end]=t;

        }
    }
    p=l[end];
    l[end]=pivot;
    pivot=p;
    return end;
}
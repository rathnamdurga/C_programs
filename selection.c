#include<stdio.h>
void selection(int l[20],int n);
void main()
{
    int n,l[20],i;
    printf("enter n:");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&l[i]);
    }
    selection(l,n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",l[i]);
    }
}
void selection(int l[20],int n)
{
    int i,j,min,t;
    for(i=1;i<n;i++)
    {
        min=i;
        for(j=i+1;j<=n;j++)
        {
           if(l[j]<l[min])
           {
               min=j;
           }
        }
        t=l[i];
        l[i]=l[min];
        l[min]=t;
    }
}
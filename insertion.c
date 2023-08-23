#include<stdio.h>
void insertion(int l[20],int n);
void main()
{
    int n,l[20],i;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter array elemants:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&l[i]);
    }
    insertion(l,n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",l[i]);
    }
}
void insertion(int l[20],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        for(j=i;j>=1;j--)
        {
            if(l[j]>l[j+1])
            {
                t=l[j];
                l[j]=l[j+1];
                l[j+1]=t;
           }
           else
           break;
        }
    }
}

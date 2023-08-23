#include <stdio.h>
#include<stdlib.h>
void uols(int n,int k,int i,int l[n+1]);
void main()
{
    int n,k,i;
   /* printf("Enter no.of elements in list:");
    scanf("%d",&n);
    printf("Enter the list elements:");*/
    int l[1000];
    for(i=1;i<=100;i++)
    {
        l[i]=rand();
        }
    printf("Enter the key element:");
    scanf("%d",&k);
    uols(100,k,i,l);
    for(i=1;i<=100;i++){
        printf("%d\t",l[i]);
    }
}
  void uols(int n,int k,int i,int l[n+1])
{
    i=1;
    while(i<=n && k!=l[i])
    {
        i++;
    }
    if(k==l[i])
    {
        printf("element found at %d position",i);
    }
    else
    {
        printf("not found");
    }
}

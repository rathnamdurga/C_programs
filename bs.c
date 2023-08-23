#include<stdio.h>
void bs(int l[20],int n);
void printdata(int l[20],int n);
void main(){
    int i,l[20],n;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter array elemnts");
    for(i=1;i<=n;i++){
        scanf("%d",&l[i]);
    }
    bs(l,n);
}
void bs(int l[20],int n){
    int i=1,j=1,t;
    for(i=1;i<n;i++){
        for(j=1;j<=n-i;j++){
            if(l[j]>l[j+1])
            {
                t=l[j];
                l[j]=l[j+1];
                l[j+1]=t;
            }
        }
    }
    printdata(l,n);
}
void printdata(int l[20],int n)
{
    for(int i=1;i<=n;i++){
        printf("%d ",l[i]);
    }
}
#include<stdio.h>
void fib(int l[20],int k,int p,int q,int r);
void main(){
int l[20],k,p=0,b=1,q=0,r,i=1,f=0,n;
printf("enter n:");
scanf("%d",&n);
printf("enter array elements");
for(i=1;i<=n;i++){
    scanf("%d",&l[i]);
}
while(f<n)
{
    f=p+b;
    r=q;
    q=p;
    p=b;
    b=f;
    //printf("%d    ",p);
}
printf("Enter key element:");
scanf("%d",&k);
fib(l,k,p,q,r);
}
void fib(int l[20],int k,int p,int q,int r){
    int t;
    //("hi\n %d ",p);
    while(p!=0)
    {
        //printf("while\t");
        if(k==l[p])
        {
            printf("element is found at %d",p);
            break;
        }
        else if(k>l[p])
        {
            if(q==1)
            p=0;
            else
            {
            p=p+r;
            q=q-r;
            r=r-q;
            }
        }
        else
        {
            if(r==0)
            p=0;
            else
            {
            t=q;
            p=p-r;
            q=r;
            r=t-r;
            }
        }
        if(p==0)
            printf("Element not found");
       // printf("%d  ",l[p]);
    }
  
}
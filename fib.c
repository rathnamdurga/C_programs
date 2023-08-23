#include<stdio.h>
void main(){
    int n,a=0,b=1,f;
    scanf("%d",&n);
    printf("%d%d",a,b);
   while(f<n){
    f=a+b;
    a=b;
    b=f;
   printf("%d",f);
   }
}

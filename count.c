#include<stdio.h>
void main(){
    int n,a[10],c=0,t=0;
    printf("enter n");
    scanf("%d",&n);
    printf("enter array elements");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]>0){
        c++;
    }
    else if(a[i]==0){
        continue;
    }
    else{
        t++;
    }
    }
    printf("%d\t",c);
    printf("%d",t);
    
}
#include<stdio.h>
void main(){
    int n,a[100],c,max,min,i;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        while(i<n){
        max=a[0];
        if(a[i]>=max){
            max=a[i];
        }
        else{
            min=a[i];
        }
    }
    }
    c=max+min;
    printf("%d",c);

}
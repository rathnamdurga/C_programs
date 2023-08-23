#include<stdio.h>
void main(){
    int n,a[10],k;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    printf("%d",a[k]);
}
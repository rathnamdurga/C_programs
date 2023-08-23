#include<stdio.h>
void main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int x=1;
    while(x<=n){
    int y=k/x;
    if(x*y==k && y<=n){
        printf("YES");
    }
    else{
        printf("NO");
    }
    x++;
   }
}
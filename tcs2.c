#include<stdio.h>
void main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int x=1;x<=n;x++){
        if(k%x==0){
            int y=k/x;
        if(y<=n && n-y+1>=x)
            printf("YES");
        }
        
    
    }
printf("NO");
    

}
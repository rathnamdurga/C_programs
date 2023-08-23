#include<stdio.h>
void main(){
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==m ||j==1 || j==n)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
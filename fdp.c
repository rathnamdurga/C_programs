#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    printf("%d\n",dp[n]);
    for(int i=0;i<=n;i++){
        printf("%d",dp[i]);  ̣                                               
    }
}

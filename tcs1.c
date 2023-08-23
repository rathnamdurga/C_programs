#include<stdio.h>
void main(){
    int n;
    int mod=1000000007;
    scanf("%d",&n);
    int dp[n+1];
    dp[1]=1;
    dp[2]=3;
    for(int i=3;i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2])%mod;
    }
    printf("%d\n",dp[n]);
    for(int i=1;i<=n;i++){
        printf("%d",dp[i]);                                                
    }
}

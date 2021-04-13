#include <iostream>
#include<string.h>
using namespace std;
#define mod 1000000000+7
/*int dp[105][1000005];
int ways(int a[],int n,int sum)
{
    if(sum==0){
        return 1;
    }
    if(sum<0){
        return 0;
    }
    if(n<=0&&sum>=1)
        return 0;
    if(dp[n][sum]!=-1){
        return dp[n][sum];
    }
    else
    dp[n][sum]= ways(a,n-1,sum)%(mod)+ways(a,n,sum-a[n-1])%(mod);


    return dp[n][sum]%(mod);


}*/
int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
   // memset(dp,-1,sizeof(dp));
   // cout<<ways(a,n,sum)%(mod)<<endl;
   int dp[n+1][sum+1];
   for(int i=0;i<=n;i++){
    dp[i][0]=1;

   }
   for(int j=0;j<=sum;j++){
    dp[0][j]=0;
   }
   for(int i=1;i<=n;i++){

    for(int j=1;j<=sum;j++){
        if(a[i-1]<=j)
        dp[i][j]=dp[i][j-a[i-1]]%(mod)+dp[i-1][j]%(mod);
        else
            dp[i][j]=dp[i-1][j]%(mod);
    }
   }
   cout<<dp[n][sum]%(mod)<<endl;

    return 0;
}

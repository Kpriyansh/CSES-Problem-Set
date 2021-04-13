#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int i=0;i<=sum;i++){
        dp[0][i]=INT_MAX-1;
    }
    dp[n][sum]=-1;
    for(int i=1;i<=sum;i++){
        if(i%a[0]==0){
            dp[1][i]=i/a[0];
        }
        else
            dp[1][i]=INT_MAX-1;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(a[i-1]<=j){
                dp[i][j]=min(1+dp[i][j-a[i-1]],dp[i-1][j]);
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    if(dp[n][sum]==INT_MAX-1){
        cout<<-1<<endl;
    }
    else
    cout<<dp[n][sum]<<endl;

    return 0;
}

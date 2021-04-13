#include <iostream>

using namespace std;

int main()
{
    int n,sum;
    cin>>n>>sum;
    int wt[n];
    int val[n];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++)
        cin>>val[i];
    int dp[n+1][sum+1];
    for(int i=0;i<=sum;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){

            if(wt[i-1]<=j){
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);

            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][sum]<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    int dp[m+1][n+1];
    for(int i=0;i<=n;i++){

        dp[0][i]=i;

    }
    for(int i=1;i<=m;i++){

            dp[i][0]=i;

    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s2[i-1]==s1[j-1])
            dp[i][j]=dp[i-1][j-1];
            else
                dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
        }
    }
    cout<<dp[m][n]<<endl;

    return 0;
}

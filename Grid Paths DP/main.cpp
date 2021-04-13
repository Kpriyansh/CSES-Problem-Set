#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int mod =1e9+7;
    int n;
    cin>>n;
    vector<vector<char>>a;
    for(int i=0;i<n;i++){
        vector<char>v;
        for(int i=0;i<n;i++){
            char x;
            cin>>x;
            v.push_back(x);
        }
        a.push_back(v);
        v.clear();
    }
    int dp[n][n];
    if(a[0][0]=='*')
    dp[0][0]=0;
    else
        dp[0][0]=1;
    for(int i=1;i<n;i++){
        if(a[0][i]=='.'&&dp[0][i-1]!=0){
            dp[0][i]=1;
        }
        else{
            dp[0][i]=0;
        }
    }
    for(int i=1;i<n;i++){
        if(a[i][0]=='.'&&dp[i-1][0]!=0){
            dp[i][0]=1;
        }
        else
            dp[i][0]=0;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[i][j]=='*'){
                dp[i][j]=0;
            }
            else{
                dp[i][j]=dp[i-1][j]%(mod)+dp[i][j-1]%(mod);
               // dp[i][j]%=(mod);
            }
        }
    }
    if(a[0][0]=='*')
        cout<<0<<endl;
    else
    cout<<dp[n-1][n-1]%(mod)<<endl;
    return 0;
}

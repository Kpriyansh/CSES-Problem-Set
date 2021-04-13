#include <iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}

    bool dp[n+1][sum+1];
    for(int i=1;i<=sum;i++){
        dp[0][i]=false;
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=true;
    }
    set<int>v;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
           if(j>=a[i-1]){
            dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
           }
           else
            dp[i][j]=dp[i-1][j];
           if(dp[i][j])
                v.insert(j);

        }

    }
    cout<<v.size()<<"\n";
    for(auto p:v)cout<<p<<" ";

    return 0;
}

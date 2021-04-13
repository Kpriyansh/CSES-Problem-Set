#include <iostream>

using namespace std;

int main()
{
    int n,sum;
    int mod=1e9+7;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int dp[sum+1]={0};
    dp[0]=1;
    for(int i=1;i<=sum;i++){
        for(int j=0;j<n;j++){
            if(a[j]<=i){
                dp[i]+=dp[i-a[j]]%(mod);
                dp[i]%=mod;
            }
        }
    }
    cout<<dp[sum]%(mod)<<endl;

    return 0;
}

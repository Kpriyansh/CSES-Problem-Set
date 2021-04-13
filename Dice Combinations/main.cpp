#include <iostream>
#include<cstring>
#define mod 1000000007
using namespace std;
typedef long long ll;
ll dp[10000001];
ll cntSum(ll n){

   for(ll i=1;i<=n;i++){
    for(ll j=1;j<=6;j++){
        if(j>i)
        break;
        dp[i]=(dp[i]+dp[i-j])%mod;
    }
   }
   return dp[n];




}
int main()
{
    ll n;
    cin>>n;
    memset(dp,0,sizeof(dp));
    dp[0]=1;
   // dp[1]=1;
    ll x=cntSum(n);

    cout<<x<<endl;




    return 0;
}

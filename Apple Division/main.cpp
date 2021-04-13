#include <iostream>
#include<cstring>
using namespace std;
typedef long long ll;

bool dp[21][20000001];
bool sum(ll a[],ll n,ll k){
    if(k==0)
        return true;
    if(n==0)
        return false;
    if(dp[n][k]!=false)
        return dp[n][k];
    if(a[n-1]<=k)
        return sum(a,n-1,k-a[n-1])||sum(a,n-1,k);
    if(a[n-1]>k)
        return sum(a,n-1,k);

  }
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll range=0;
    for(ll i=0;i<n;i++)
       {
        cin>>a[i];
        range+=a[i];
       }

     memset(dp,false,sizeof(dp));

     for(ll i=range/2;i>=0;i--){
        if(sum(a,n,i)==true){

            cout<<abs(range-2*i)<<endl;

            break;
        }
    }

    return 0;
}

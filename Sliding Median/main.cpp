#include <iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    vector<ll>d;
    for(ll i=0;i<k;i++){
        d.push_back(a[i]);
    }
   cout<<fixed<<setprecision(1);
    sort(d.begin(),d.end());
    if(k & 1){
        cout<<d[k/2]<<" ";
    }
    else{
        cout<<d[k/2-1]<<" ";
    }
    for(ll i=k;i<n;i++){
        d.clear();
        for(ll j=i-k+1;j<=i;j++){
            d.push_back(a[j]);
        }
        sort(d.begin(),d.end());
        if(k & 1){
        cout<<d[k/2]<<" ";
       }
      else{
        cout<<d[k/2-1]<<" ";
      }
    }
    return 0;
}

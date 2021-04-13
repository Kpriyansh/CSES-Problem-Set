#include <iostream>
#include<unordered_map>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<ll,ll>m;
    ll cnt=0;
    ll sum=0;
    for(ll i=0;i<n;i++){
        sum+=a[i];
        if(sum==x)
            cnt++;
        if(m.find(sum-x)!=m.end())
          cnt+=m[sum-x];

        m[sum]++;

    }
    cout<<cnt<<endl;


    return 0;
}

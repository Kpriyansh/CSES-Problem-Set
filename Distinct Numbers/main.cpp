#include <iostream>
#include <map>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        m[a]++;
    }
    cout<<m.size()<<endl;
    return 0;
}

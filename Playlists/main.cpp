#include<map>
#include <iostream>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{



    ll n;
    cin>>n;
    vector<ll>a(n+1);
    map<ll,ll>m;

    for(size_t i=0;i<n;i++)
        {cin>>a[i];}
    ll ans=0;
    for(ll i=0,j=0;i<n;i++){
        while(m[a[j]]<1&&j<n)
        {
            m[a[j]]++;
            j++;
        }
        ans=max(ans,j-i);
        m[a[i]]--;
    }
    cout<<ans<<endl;
    return 0;
}

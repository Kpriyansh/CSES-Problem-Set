#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>a;
    for(ll i=0;i<n;i++){
        ll c,d;
        cin>>c>>d;
        a.push_back({d,c});
    }
    sort(a.begin(),a.end());
    ll curr=0,cnt=0;
    for(ll i=0;i<n;i++){
        if(a[i].second>=curr){
            cnt++;
            curr=a[i].first;
        }

    }
    cout<<cnt<<endl;
    return 0;
}

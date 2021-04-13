#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x;
    cin>>n;
    vector<ll> a;
    for(ll i=0;i<n;i++){
        cin>>x;
        auto p=upper_bound(a.begin(),a.end(),x);
        if(p==a.end()){
            a.push_back(x);
        }
        else{
            *p=x;
        }
    }
    cout<<a.size()<<endl;



    return 0;
}

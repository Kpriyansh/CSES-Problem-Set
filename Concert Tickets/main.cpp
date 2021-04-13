#include <iostream>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll;
int main()
{

   ll n,m;
    cin>>n>>m;
    multiset<ll,greater<int>>tick;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        tick.insert(a);
    }
    for(ll i=0;i<m;i++){
        ll b,x;
        cin>>b;
        auto y=tick.lower_bound(b);
        if(y==tick.end())
            cout<<-1<<endl;
        else{
            cout<<*y<<endl;
            tick.erase(y);
        }


    }










    return 0;
}

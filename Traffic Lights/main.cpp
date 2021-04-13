#include <iostream>
#include<set>
using namespace std;
typedef long long ll;
int main()
{
    multiset<ll>s,b;
    ll n,k;
    cin>>n>>k;
    ll d=0;
    s.insert(0);
    s.insert(n);
    b.insert(n);
    for(ll i=0;i<k;i++){
        ll a;
        cin>>a;
        auto it=s.upper_bound(a);
        auto it1=it;
        it--;
      //  cout<<*it1<<" "<<*it<<endl;
         d=*it1-*it;
         b.erase(b.find(d));
         s.insert(a);
         b.insert(*it1-a);
         b.insert(a-*it);
         cout<<*b.rbegin()<<" ";
   }

    return 0;
}

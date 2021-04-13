#include <iostream>
#include<set>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{ios_base::sync_with_stdio(false);
	cin.tie(0);
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];

    ll pre[n];
    pre[0]=a[0];
    for(ll i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    while(q--){
        ll u,v;
        cin>>u>>v;
        if(u==1){
            cout<<pre[v-1]<<endl;
        }
        else if(u==v){
            cout<<a[u-1]<<endl;
        }
        else{
            cout<<pre[v-1]-pre[u-1-1]<<endl;
        }
    }
    return 0;
}

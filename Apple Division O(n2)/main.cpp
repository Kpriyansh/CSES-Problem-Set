#include <iostream>
#include<algorithm>
#include<climits>
#include<cmath>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n+1);
    ll range=0;
    for(size_t i=0;i<n;i++){
        cin>>a[i];
        range+=a[i];
    }

    ll mn=INT_MAX,sum=0;
    for(ll i=1;i<(1<<n);i++){
            sum=0;
        for(ll j=0;j<n;j++){
            if(i & 1<<j)
                sum+=a[j];
        }
    mn=min(abs(range-2*sum),mn);
    }
    cout<<mn<<endl;

    return 0;
}

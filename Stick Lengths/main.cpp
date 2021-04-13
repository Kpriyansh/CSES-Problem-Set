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
    for(size_t i=1;i<=n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    ll x;
    x=n/2;
    ll sum1=0,sum2=0;
    for(ll i=1;i<=n;i++){


        if((n & 1)==0)
        {
            sum1+=abs(a[x+1]-a[i]);
            sum2+=abs(a[x]-a[i]);
        }
        else{
            sum1=INT_MAX;
            sum2+=abs(a[x+1]-a[i]);
        }


    }
    cout<<min(sum1,sum2)<<endl;

    return 0;
}

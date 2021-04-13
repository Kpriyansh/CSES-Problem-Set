#include <iostream>
#include <cmath>
#define mod 1000000007
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    unsigned long long prod=1;
    for(ll i=1;i<=n;i++){
        prod=(prod*2)%(mod);
    }
    cout<<prod<<endl;
    return 0;
}

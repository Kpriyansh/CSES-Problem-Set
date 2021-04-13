#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll ans=0;
    ll i=0,j=n-1;
    while(i<=j){
        if(a[i]+a[j]<=x){
            ans++;
            i++;
            j--;
        }
        else{
            j--;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

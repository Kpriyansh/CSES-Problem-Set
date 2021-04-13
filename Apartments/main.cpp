#include <iostream>
#include<algorithm>
#include<set>
#include<cmath>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>a(n);
    for(size_t i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    vector<ll>b(m);
    for(size_t i=0;i<m;i++)
        cin>>b[i];
    sort(b.begin(),b.end());
    ll i=0,j=0;
    ll cnt=0;
    while(i<n&&j<m){
        if(abs(b[j]-a[i])<=k){
            cnt++;
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else
            j++;
    }
    cout<<cnt<<endl;



    return 0;
}

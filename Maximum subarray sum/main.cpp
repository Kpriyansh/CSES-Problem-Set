#include <iostream>
#include<climits>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll a[n];

    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll sumfar=INT_MIN,sumhere=0;
    for(ll i=0;i<n;i++){
        sumhere+=a[i];
        if(sumfar<sumhere)
            sumfar=sumhere;
        if(sumhere<0)
            sumhere=0;
    }
    cout<<sumfar<<endl;
    return 0;
}

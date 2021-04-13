#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll sum1=n*(n+1)/2;
    ll sum2=0;
    for(int i=0;i<n-1;i++){
        int a;
        cin>>a;
        sum2+=a;
    }
    cout<<sum1-sum2<<endl;
    return 0;
}

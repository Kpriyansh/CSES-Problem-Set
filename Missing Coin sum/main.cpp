#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    long long sum=1;
    for(int i=0;i<n;i++){
        if(a[i]>sum)
            break;
        sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}

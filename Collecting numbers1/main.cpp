#include <iostream>
#include<algorithm>
using namespace std;
bool compare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first<=p2.first;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    pair<int,int>p[n];
    for(int i=0;i<n;i++){
        p[i]={a[i],i+1};
    }
    sort(p,p+n);
    int cnt=1;
    for(int i=0;i<n-1;i++){
        if(p[i].second>p[i+1].second)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

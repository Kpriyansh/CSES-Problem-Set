#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++){
        int c,b;
        cin>>c>>b;
        a.push_back({c,1});
        a.push_back({b,0});
    }
    sort(a.begin(),a.end());
    int cnt=0;
    int mx=0;
    for(int i=0;i<a.size();i++){
          if(a[i].second==1){
            cnt++;
            mx=max(cnt,mx);
          }
          else
            cnt--;


    }
    cout<<mx<<endl;

    return 0;
}

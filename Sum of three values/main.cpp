#include <iostream>
#include<vector>
#include<cstring>
#include<unordered_set>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    vector<ll>b(n);
    ll sum=0;
    ll f=0;
    for(size_t i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end());

    bool flag=false;
    multiset<ll>m;
    for(int i=0;i<n-2;i++){
        m.insert(b[i]);
        int sum=k-b[i];
        int s=i+1,e=n-1;
        while(s<e){
            if(b[s]+b[e]==sum){
               // m[b[s]]=s+1;
                m.insert(b[s]);
                m.insert(b[e]);
               // m[b[e]]=e+1;
                f=true;
                break;
            }
            else if(b[s]+b[e]>sum)
                e--;
            else
                s++;
        }
        if(f)
            break;
        else
            m.clear();
    }
    if(f)
    {
        if(m.size()==3){
        int t1=-1,t2=-1;
        int cnt=0;
        for(auto x:m){

            for(int i=0;i<n;i++){
            if((a[i]==x&&cnt<=2)&&(i!=t1&&i!=t2)){
            cout<<i+1<<" ";
              cnt++;
              if(cnt==1)
              t1=i;
              else if(cnt==2)
                t2=i;
              break;

            }

            }
        }
        }
        else
            cout<<"IMPOSSIBLE"<<endl;


    }
    else
        cout<<"IMPOSSIBLE"<<endl;

}

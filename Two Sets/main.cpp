#include <iostream>
#include<vector>
using namespace std;

int main()
{
   int n;
   cin>>n;
   long long sum=0;
   for(int i=1;i<=n;i++){
    sum+=i;
   }
   string s;
   vector<int>v1,v2;
   if(sum%2==0){
    s="YES";
    if(n%4==0){
        for(int i=1;i<=n/4;i++)
            v1.push_back(i);
        for(int i=(n-n/4)+1;i<=n;i++)
            v1.push_back(i);
        for(int i=n/4+1;i<(n-n/4)+1;i++)
            v2.push_back(i);

    }
    if(n%4==3){
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);

        for(int i=4;i<=3+(n-3)/4;i++)
            v1.push_back(i);
        for(int i=(n-(n-3)/4)+1;i<=n;i++)
            v1.push_back(i);
        for(int i=3+((n-3)/4)+1;i<(n-(n-3)/4)+1;i++)
            v2.push_back(i);
    }
    cout<<s<<endl;
    cout<<v1.size()<<endl;
    for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;

   cout<<v2.size()<<endl;
   for(auto y:v2)
    cout<<y<<" ";
   cout<<endl;
   }
   if(sum%2!=0){
    cout<<"NO"<<endl;
   }

    return 0;
}

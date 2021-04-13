#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int cnt=0;
    vector<string>v;
    v.push_back(s);
    while(next_permutation(s.begin(),s.end())){
          v.push_back(s);
          cnt++;
          }
   cout<<cnt+1<<endl;
   for(auto p:v){
    cout<<p<<endl;
   }


    return 0;
}

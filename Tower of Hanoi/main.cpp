#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int,int>>moves;
void gettower(int n,int from,int to,int temp)
{
    if(n==0){
       // moves.push_back({1,3});
        return;
    }
    gettower(n-1,from,temp,to);
    moves.push_back({from,to});
    gettower(n-1,temp,to,from);


}
int main()
{
    int n;
    cin>>n;
    gettower(n,1,3,2);
    cout<<moves.size()<<endl;
    for(auto p:moves){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}

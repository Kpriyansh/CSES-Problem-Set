#include <iostream>
#include<vector>
using namespace std;
vector<int>adj[100001];
bool vis[100001]={false};
vector<int>newRoads;
void dfs(int x)
{
    vis[x]=true;
    for(auto v:adj[x]){
        if(!vis[v]){
            dfs(v);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            cnt++;
            dfs(i);
            newRoads.push_back(i);
        }
    }

    cout<<cnt-1<<endl;
    int sz=newRoads.size();
    for(int i=0;i<sz-1;i++){
        cout<<newRoads[i]<<" "<<newRoads[i+1];
        cout<<endl;
    }



    return 0;
}

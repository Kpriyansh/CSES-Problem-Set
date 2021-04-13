#include <iostream>
#include<vector>
#include<map>
using namespace std;
vector<int>adj[100001];
vector<bool>vis(100001,false);
vector<int>color(100001,0);
bool dfs(int u,int c,int p)
{
    vis[u]=true;
    color[u]=c;
    for(auto v:adj[u]){
        if(v==p)continue;
        if(color[v]==0){
            if(!dfs(v,color[u]^3,u))
            return false;

        }
        if(color[v]==color[u])
            return false;
    }
    return true;
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
    bool f=true;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(!dfs(i,1,-1)){
                f=false;
            }
        }
    }
    if(f){
        for(int i=1;i<=n;i++){
            cout<<color[i]<<" ";
        }
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;

}

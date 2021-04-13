#include <iostream>
#include<vector>
using namespace std;
vector<int>adj[100001];
vector<bool>vis(100001,false);
vector<int>par(100001);
int s,e;
vector<int> path()
{

    int cur=e;
    vector<int>p;
    p.push_back(e);
    while(cur!=s){
        p.push_back(par[cur]);
        cur=par[cur];
    }
    p.push_back(e);

    return p;

}
bool dfs(int n,int p)
{
    par[n]=p;
    vis[n]=true;
    for(auto u:adj[n]){
        if(u==p)continue;
        if(vis[u]){
            s=u;
            e=n;
            return true;

        }
        if(!vis[u]){
            if(dfs(u,n))
                return true;
        }
    }
    return false;
}
bool isvis(int n)
{
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(dfs(i,-1))return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    if(!isvis(n)){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }

   vector<int>p= path();
   cout<<p.size()<<endl;
   for(auto v:p)cout<<v<<" ";


    return 0;
}

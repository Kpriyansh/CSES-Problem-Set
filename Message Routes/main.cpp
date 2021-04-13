#include <iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
vector<int>adj[100001];
//bool vis[100001]={false};
int par[100001]={0};
vector<int> path(int n)
{
    int cur=n;
    vector<int>p;

    while(cur!=-1){
        p.push_back(cur);
        cur=par[cur];

    }
    return p;
}
void bfs(int u,int n)
{
  //  par[u]=p;
   // vis[u]=true;
    //for(auto it:adj[u]){
     //   if(!vis[it]){
      //      dfs(it,u);
        //}
    //}

    queue<int>q;
    q.push(u);
    while(!q.empty()){
        int p=q.front();
        q.pop();
        if(p==n)return;
        for(auto it:adj[p]){
            if(!par[it]){
                par[it]=p;
                q.push(it);
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    par[1]=-1;
    bfs(1,n);
    if(!par[n]){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    vector<int>v=path(n);
    cout<<v.size()<<endl;
    reverse(v.begin(),v.end());
    for(auto p:v){
        cout<<p<<" ";
    }
    cout<<endl;
    return 0;
}

#include <iostream>
#include<vector>
using namespace std;
void dfs(int x,int y,vector<vector<char>>&a,int n,int m){

   if(x<0||y<0||x>=n||y>=m||a[x][y]!='.')
    return ;
   a[x][y]='*';
   dfs(x+1,y,a,n,m);
   dfs(x,y+1,a,n,m);
   dfs(x-1,y,a,n,m);
   dfs(x,y-1,a,n,m);
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> a(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }

    int rooms=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='.'){
                dfs(i,j,a,n,m);
                rooms++;
            }
        }
    }
    cout<<rooms<<endl;
    return 0;
}

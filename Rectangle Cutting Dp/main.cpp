#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int dp[a+1][b+1];

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(i==j){
                dp[i][j]=0;
            }
            else{
                int ans1=1e8,ans2=1e8;
                for(int k=1;k<j;k++){
                    ans1=min(ans1,(1+dp[i][j-k]+dp[i][k]));
                }
                for(int k=1;k<i;k++){
                    ans2=min(ans2,(1+dp[i-k][j]+dp[k][j]));
                }
                dp[i][j]=min(ans1,ans2);

            }
        }
    }
    cout<<dp[a][b]<<endl;
    return 0;
}

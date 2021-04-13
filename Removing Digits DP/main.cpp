#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    int sum;
    cin>>sum;
    int x;
    int cnt=0;
    while(sum!=0){
        x=sum;
        int maxi=0;
        while(x!=0){
            int r=x%10;
            maxi=max(maxi,r);
            x/=10;
        }
        sum-=maxi;
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}

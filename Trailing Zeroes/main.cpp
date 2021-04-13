#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=5;i<=n;i=i*5){
        sum+=n/i;
    }
    cout<<sum<<endl;
    return 0;
}

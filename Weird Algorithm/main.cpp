#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    if(n!=1){
    do{
        cout<<n<<" ";
        if((n & 1)==0)
            n=n/2;
        else
            n=3*n+1;
    }
    while(n>1);}
    cout<<1;
    return 0;
}

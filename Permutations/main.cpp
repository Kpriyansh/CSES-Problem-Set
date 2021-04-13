#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    if(n==1)
        cout<<1;
    else if(n==2||n==3)
        cout<<"NO SOLUTION"<<endl;
    else{
    if(n & 1==1){
    long long i=1;

    while(i<=n){
        cout<<i<<" ";
        i+=2;
    }
    long long j=2;
    while(j<n){
        cout<<j<<" ";
        j+=2;
    }
    }
    else{
            long long j=2;
    while(j<=n){
        cout<<j<<" ";
        j+=2;
    }
    long long i=1;

    while(i<n){
        cout<<i<<" ";
        i+=2;
    }

    }
    }
    return 0;
}

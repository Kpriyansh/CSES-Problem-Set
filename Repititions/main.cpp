#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin>>s;
    ll length=1;
    ll cnt=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            cnt++;
            length=max(length,cnt);

        }
        else{
            cnt=1;

        }

    }
    cout<<length<<endl;
    return 0;
}

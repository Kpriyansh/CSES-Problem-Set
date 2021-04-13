#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[100];
    cin>>s;
    int m=strlen(s);

    int n=(1<<m)-1;

    for(int i=0;i<=n;i++){
        int x=0;
        while(i>0){
            if((i&1)==1)
                cout<<s[x];


            x++;
            i=i>>1;
        }
        cout<<endl;
    }

    return 0;
}

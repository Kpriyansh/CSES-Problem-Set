#include <iostream>
#include <algorithm>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (l<=r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }


}
int main()
{
    int n,sum;
    cin>>n>>sum;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    sort(a,a+n);
    int i=0,j=n-1,x,y;bool f=false;
    while(i<j){
        if(a[i]+a[j]==sum){
            x=a[i];
            y=a[j];
            f=true;
            break;
        }
        else if(a[i]+a[j]>sum){
            j--;
        }
        else
            i++;
    }
    if(!f){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{

        for(int i=0;i<n;i++){
            if(b[i]==x)
            {
                cout<<i+1<<" ";
            }
        }
        for(int i=0;i<n;i++){
            if(b[i]==y)
            {
                cout<<i+1<<endl;
            }
        }
    }


    return 0;
}

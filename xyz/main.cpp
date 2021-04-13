#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(0);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void hanoi(int n, char x, char y, char z) {
    if (n == 1)
    	cout << x << ' ' << z << '\n';
    else {
        hanoi(n-1, x, z, y);
        cout << x << ' ' << z << '\n';
        hanoi(n-1, y, x, z);
    }
}

int main(){
	fast
	int n;
	cin>>n;
	cout << pow(2,n) - 1 << '\n';
	hanoi(n,'1','2','3');
}

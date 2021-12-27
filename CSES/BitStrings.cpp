#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

#define ll long long

void solve(){
	int n;
	ll x,y;
	cin >> n;
	x = 1;
	y = pow(10,9) + 7;
	for ( int i=1; i <= n; i++){
		x = (x*2) % y;
	}
	cout << x;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}
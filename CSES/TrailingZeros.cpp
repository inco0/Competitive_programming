#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

#define ll long long

ll fact(ll x, int n){
	if (x == n)
		return x;
	else{
		return x * fact(x+1, n);
	}
}

void solve(){
	int n,c=0;
	cin >> n;
	ll r;
	r = fact(1, n);
	while (true){
		if (r % 10 == 0){
			c++;
			r = r / 10;
		}
		else
			break;
	}
	cout << c;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}
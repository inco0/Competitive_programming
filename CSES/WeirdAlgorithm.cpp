#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

#define ll long long
#define mp make_pair

void solve(){
	ll n,x;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		auto it = v.begin();
		cin >> x;
		v[x-1] = 1;
	}
	for(int i=0; i<n; i++){
		if (v.at(i) == 0) cout << i+1;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	solve();
}
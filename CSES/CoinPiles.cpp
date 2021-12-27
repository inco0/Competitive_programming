#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

#define ll long long

void solve(){
	int n,a,b;
	cin >> n;
	while (n--){
		cin >> a >> b;
		int tmp = a;
		a = min(a,b);
		b = max(tmp,b);
		if ((b - a) > a){
			cout << "NO" << endl;
			continue;
			}
		if ((a + b) % 3 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}
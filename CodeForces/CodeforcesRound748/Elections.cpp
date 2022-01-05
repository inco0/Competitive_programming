#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

void solve(){
	int a, b, c, maxac, maxab, maxbc;
	cin >> a >> b >> c;
	maxac = max(a,c);
	maxab = max(a,b);
	maxbc = max(b,c);
	if (a > maxbc)
		cout << 0 << " ";
	else 
		cout << maxbc - a + 1 << " ";
	if (b > maxac)
		cout << 0 << " ";
	else 
		cout << maxac - b + 1 << " ";
	if (c > maxab)
		cout << 0 << " ";
	else 
		cout << maxab - c + 1 << " ";
	cout << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		solve();
	}
}
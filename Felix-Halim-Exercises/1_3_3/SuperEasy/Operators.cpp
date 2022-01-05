#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

void solve(){
	int a, b;
	cin >> a >> b;
	if (a < b)
		cout << "<" << endl;
	else if (a == b)
		cout << "=" << endl;
	else
		cout << ">" << endl;
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
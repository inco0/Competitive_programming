#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

void solve(){
	int n, max = -1, min = INT_MAX;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (a[i] < min) min = a[i];
		if (a[i] > max) max = a[i];
	}
	cout << max - min << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
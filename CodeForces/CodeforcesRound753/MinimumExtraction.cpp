#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>
#include <algorithm>
#include <deque>

using namespace std;

void solve(){
	int n, i, m;
	cin >> n;
	vector<int> a;
	while (n--){
		cin >> i;
		a.push_back(i);
	}
	sort(a.begin(), a.end());
	m = a.front();
	for (int i = 1; i < a.size(); i++){
		m = max(m, a[i] - a[i-1]);
	} 
	cout << m << endl;
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
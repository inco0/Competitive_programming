#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, x, min = INT_MAX;
	cin >> n;
	bool exists = false;
	map<int, vector<int>> a;
	for (int i = 0; i < n; i++){
		cin >> x;
		a[x].push_back(i);
		if (a[x].size() > 1)
			exists = true;
	}
	if (!exists){
		cout << -1 << endl;
		return;
	}
	for (auto [key, value] : a){
		int min_per_key = INT_MAX;
		int init = value[0];
		for (auto it = value.begin()+1; it < value.end(); it++){
			if (*it - *(it-1) < min_per_key) min_per_key = *it - *(it-1);
		}
		if (min_per_key < min) min = min_per_key;
	}
	cout << n - min << endl;
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
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <math.h>
#include <unordered_set>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<bool> used(n);
	vector<int> a(n);
	vector<unordered_set<int>> pr(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++){
		used[i] = false;
		unordered_set<int> p;
		while (a[i] >= 1){
			if (a[i] <= n) p.insert(a[i]);
			a[i] /= 2;
		}
		pr[i] = p;
	}
	for (int i = n; i > 0; i--){
		bool i_found = false;
		for (int j = 0; j < n; j++){
			if (pr[j].count(i) == 1 && !used[j]){
				used[j] = true;
				i_found = true;
				break;
			}
		}
		if (!i_found){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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
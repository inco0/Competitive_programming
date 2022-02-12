#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

void solve(){
	int n;
	long long sum = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	sort(a.begin(), a.end(), greater<int>());
	//cout << sum <<endl;
	if (sum % n != 0){
		cout << -1 << endl;
	}
	else if (a[0] == a[n-1]){
		cout << 0 << endl;
	}
	else{
		for (int i = 0; i < n; i++){
			int dif = 0, k = 0;
			int c = sum;
			if (a[i] <= sum / n){
				cout << i << endl;
				return;
			}
		}
	}
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
#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>
#include <algorithm>

using namespace std;

void solve(){
	int n, k, sum = 0, count = 0;
	cin >> n >> k;
	vector<int> position(k), diff(k);
	for (int i = 0; i < k; i++){
		cin >> position[i];
	}
	sort(position.begin(), position.end());
	for (int i = 0; i < k; i++){
		diff[i] = n - position[i];
	}
	for (int i = 0; i < k; i++){
		diff[i] = n - position[i];
	}
	for (int i = k-1; i >= 0; i--){
		if (sum >= position[i])
			break;
		sum += diff[i];
		count ++;
	}
	cout << count << endl;
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
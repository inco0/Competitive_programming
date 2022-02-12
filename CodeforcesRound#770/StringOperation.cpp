#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <math.h>

using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	if (k == 1){
		cout << "YES" << endl;
		for (int i = 0; i < n; i++){
			cout << i + 1 << endl;
		}
		return;
	}
	if (n % 2 == 1){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
	int out;
	for (int i = 0; i < n/2; i++){
		int starting = 1 + 2 * k * i;
		for (int r = 0 ; r < 2; r++){
			out = starting;
			for (int j = 0; j < k; j++){
				cout << out << " ";
				out += 2;
			}
			starting ++;
			cout << endl;
			out -= k + 2;
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
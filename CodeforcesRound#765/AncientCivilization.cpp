#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <math.h>

using namespace std;

void solve(){
	int n, l;
	cin >> n >> l;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int out = 0, j = 0;
	while (j < l){
		int count = 0;
		for (int i = 0; i < n; i++){
			if (a[i] % 2 != 0){
				count++;
			}
			a[i] = a[i] >> 1;

		}
		if (count > n/2){
			out += pow(2,j);
		}
		j++;
	}
	cout << out << endl;
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
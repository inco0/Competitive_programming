#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

void solve(){
	int n, index = 0, common;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	if ( a[0] == a[1] )
		common = a[0];
	else if ( a[0] == a[2] ){
		cout << 2 << endl;
		return;
	}
	else{
		cout << 1 << endl;
		return;
	}
	for (int i = 0; i < n; i++){
		if ( a[i] != common ){
			cout << i + 1 << endl;
			return;
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
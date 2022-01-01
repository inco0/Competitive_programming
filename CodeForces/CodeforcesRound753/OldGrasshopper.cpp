#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

void solve(){
	long long pos, n;
	cin >> pos >> n;
	if (pos % 2 == 0){
		int k = n % 4;
		if (k == 0){
			cout << pos << endl;
		}
		else if (k == 1){
				cout << pos - n << endl;
			}
		else if (k == 2){
			cout << pos + 1 << endl;
		}
		else{
			cout << pos + n + 1 << endl;
		}
	}
	else{
		int k = n % 4;
		if (k == 0){
			cout << pos << endl;
		}
		else if (k == 1){
				cout << pos + n << endl;
			}
		else if (k == 2){
			cout << pos - 1 << endl;
		}
		else{
			cout << pos - n - 1 << endl;
		}
	}
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
#include <iostream>
#include <vector>
#include <iterator>
#include <queue>

using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0)
#define ll long long

void solve(){
	int n, t, count = 0;
	cin >> n;
	vector<int> a(n+1);
	priority_queue<int> c;
	for (int j = 0; j < n; j++){
		cin >> t;
		if (t <= n && a[t] == 0){
			a[t] = 1;
		}
		else{
			count ++;
			c.push((-1) * ((t % 2 == 0) ? t/2-1 : t/2));
		}
    }	
	for (int i = 1; i <= n; i++){
		if (a[i] == 0){
			t = c.top()*(-1);
			c.pop();
			if (i > t){
				cout << -1 << endl;
				return;
		    }
	    }
	}
	cout << count << endl;
}

int main(){
	fastio;
	int t;
	cin >> t;
	while (t--){
		solve();
	}
}
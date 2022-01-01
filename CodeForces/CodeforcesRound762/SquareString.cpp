#include <iostream>
#include <vector>
#include <iterator>
#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s;
	cin >> s;
	bool flag = true;
	if (s.length() % 2 == 1){
		cout << "NO" << endl;
		return;
	}
	for (int i = 0; i < s.length()/2; i++){
		if (s[i] != s[i+s.length()/2]){
			flag = false;
			break;
		}
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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
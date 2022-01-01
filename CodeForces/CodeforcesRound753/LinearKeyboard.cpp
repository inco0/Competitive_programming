#include <iostream>
#include <vector>
#include <iterator>
#include <bits/stdc++.h>

using namespace std;

void solve(){
	string s, in;
	int sum = 0;
	unordered_map<char, int> map;
	cin >> s >> in;
	int curr;
	for (int i = 0; i < s.length(); i++){
		map.insert(make_pair(s[i], i+1));
	}
	curr = map.find(in[0])->second;
	for (auto j : in){
		sum += abs(map.find(j)->second - curr);
		curr = map.find(j)->second;
	}
	cout << sum << endl;
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
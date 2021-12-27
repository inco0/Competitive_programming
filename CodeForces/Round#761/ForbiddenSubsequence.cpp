#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

#define ll long long


void solve(){
	string s,t,out = "";
	char c;
	cin >> s >> t;
	int size = 26;
	int n[size] = {};
	for (auto i : s){
		n[int(i)-97] += 1;
	}
	for (int i=0; i < size; i++){
		c = i+97;
		out = out + string(n[i],c);
		
	}
	if ( t == "abc" && n[0] != 0 && n[1] != 0 && n[2] != 0){
		for (int i=0; i < n[2]; i++){
			out[n[0] + i] = 'c';
		}
		for (int i=0; i < n[1]; i++){
			out[n[0] + n[2] + i] = 'b';
		}
		cout << out << endl;
	}
	else
		cout << out << endl;
	
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
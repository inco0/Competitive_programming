#include <iostream>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

#define ll long long

void solve(){
	string s;
	int n=0,mx=0;
	cin >> s;
	char tmp=s[0];
	for (auto i=0; i < s.length(); i++){
		if (tmp == s[i])
			n++;
		else{
			if (n > mx) mx = n;
			n = 1;
		}
		tmp = s[i];
	}
	cout << max(n, mx);
}

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
	solve();
}

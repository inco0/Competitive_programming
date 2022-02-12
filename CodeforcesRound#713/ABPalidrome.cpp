#include <iostream>
#include <math.h>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

void solve(){
	int n, a, b, ones = 0, zeroes = 0, qs = 0;
	string s, out = "";
	//out.copy(s, s.length(), 0);
	cin >> a >> b >> s;
	n = a+b;
	for (int i = 0; i < n; i++){
		out += s[i];
		if (s[i] == '0' && s[n-i-1] == '1'){
			cout << -1 << endl;
			return;
		}
		else if (s[i] == '1' && s[n-i-1] == '0'){
			cout << -1 << endl;
			return;
		}
		if (s[i] == '0')
			zeroes++;
		else if (s[i] == '1')
			ones++;
		else
			qs++;
	}
		for (int i = 0; i < ceil(n/2.0); i++){
		int symm = n-i-1;
		if (s[i] == '0' && s[symm] == '?'){
			out[symm] = '0';
			zeroes++;
		}
		else if (s[i] == '?' && s[symm] == '0'){
			out[i] = '0';
			zeroes++;
		}
		else if (s[i] == '1' && s[symm] == '?'){
			out[symm] = '1';
			ones++;
		}
		else if (s[i] == '?' && s[symm] == '1'){
			out[i] = '1';
			ones++;
		}
	}
	if (n % 2 == 1 && s[n/2] == '?'){
		if ((a - zeroes) % 2 == 1){
			out[n/2] = '0';
			zeroes++;
		}
		else{
			ones++;
			out[n/2] = '1';
		}
	}
	if (zeroes > a || ones > b){
		cout << -1 << endl;
		return;
	}	
	else if (((a - zeroes) % 2 == 1) && ((b - ones) % 2 == 1)){
		cout << -1 << endl;
		return;
	}
	else{
		int j = 0;
		while ((b - ones > 0 || a - zeroes > 0) && j < ceil(n/2.0)){
			int symm = n-j-1;
			if (s[j] == '?' && s[symm] == '?'){
				if (b - ones >= 2){
					out[j] = '1';
					out[symm] = '1';
					ones += 2;
				}
				else if (a - zeroes >= 2){
					out[j] = '0';
					out[symm] = '0';
					zeroes += 2;
				}
			}
			j++;
		}
	}
	for (int i = 0; i < n; i++){
		cout << out[i];
	}
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		//cout << "CASE " << t << endl;
		solve();
	}
}
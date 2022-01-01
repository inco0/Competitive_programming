#include <iostream>
#include <vector>
#include <iterator>
#include <bits/stdc++.h>

using namespace std;

void solve(){
	string a,b,out = "";
	cin >> a >> b;
	int x,y,count = 0;
	int j = b.length()-1;
	for (int i = a.length()-1; i >= 0; i--){
		if (j >= 0){
			x = int(b[j]);
			y = int(a[i]);
			if (x < y){
				if (b[j-1] == '1'){
					x = 10 + x;
					out.insert(0,to_string(x-y));
					j -= 2;
					count += 2;}
				else{
					cout << -1 << endl;
					return;
				}
			} 
			else{
				out.insert(0,to_string(x-y));
				count++;
				j --;
		    }
		}
		else{
			cout << -1 << endl;
			return;
		}
	}
	int rem = b.length()-1 - count;
	if (rem >= 0){
		for (int i = rem; i >= 0; i--){
			string r(1,b[i]);
			out.insert(0,r);
		}
		cout << out << endl;
		return;
	}
	if (out[0] == '0'){
		bool flag = false;
		for (int i = 1; i < out.length(); i++){
			if (out[i] != '0' || flag){
				flag = true;
				cout << out[i];
			}
		}
		if (!flag){
			cout << -1 << endl;
			return;
		}
		else{
			cout << endl;
			return;
		}
		
	}
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
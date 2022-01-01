#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void solve(){
	int n,count = 0;
	cin >> n;
	cout << floor(sqrt(n)) + floor(cbrt(n)) - floor(sqrt(cbrt(n))) << endl;
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
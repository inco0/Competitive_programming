#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

bool check_mod (int x, int y, int z){
	if ( (z + x) % 2 == 0 )
		if ( (z + x) / 2 % y == 0 )
			return true;
	return false;
}

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	int z = c + a;
	if (((( 2 * b - a) % c == 0 ) && ( 2 * b - a  > 0)) || ( ( 2 * b - c) % a == 0 && ( 2 * b - c > 0 ) ) || (( z % 2 == 0) && ( z/2 % b == 0 )))
		cout << "YES" << endl;
	else	
		cout << "NO" << endl;
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
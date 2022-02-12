#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <math.h>

using namespace std;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	int diff = abs(a + c - 2*b) % 3;
	if (diff == 0)
		cout << 0 << endl;
	else{
		cout << 1 << endl;
	}
	
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
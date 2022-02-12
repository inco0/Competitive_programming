#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <math.h>

using namespace std;

void solve(){
	int a, b, p;
	cin >> a >> b;
	int min_socks = min(a,b);
	if (min_socks == a){
		p = (b - min_socks)/2;
	}
	else{
		p = (a - min_socks)/2;
	}
	cout << min(a,b) << " " << p;

	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//int t;
	//cin >> t;
	//while(t--){
		solve();
	//}
}
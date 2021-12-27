#include <iostream>
#include <vector>
#include <math.h>
#include <iterator>

using namespace std;

#define ll long long

void solve(){
	ll y,z;
	cin >> y >> z;
	if (y >= z){
		if (y % 2 == 0){
			cout << y*y - (z-1)<< "\n";
		}
		else{
			cout << (y-1)*(y-1)+1 + (z-1) << "\n";
		}
	}
	else{
		if (z % 2 == 0){
			cout << (z-1)*(z-1)+1 + (y-1) << "\n";
		}
		else{
			cout << z*z - (y-1) << "\n";
	    }
	}
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
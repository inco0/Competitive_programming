#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

#define ll long long


int gcd_f(int x,int y){
	int r = x % y;
	while (r != 0){
		r = x % y;
		x = min(x,y);
		y = r;
	}
	return x;
}

void solve(){
	int n,a,b,gcd;
	cin >> n;
	if (n % 2 == 0){
		gcd = 1;
		b = 2;
		a = n - 3;
	}
	else{
		for (int i = 1; i < n/5; i += 2){
			gcd = i;
			b = 2*gcd;
			a = n - b - gcd;
			while (a > b){
				if ((a + b + gcd == n) && gcd_f(a,b) == gcd){
					cout << a << " " << b << " " << gcd << endl;
					return;
				}
				else{
					a -= gcd;
					b += gcd;
				}
			}
		}
	}
	cout << a << " " << b << " " << gcd << endl;
	
		
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
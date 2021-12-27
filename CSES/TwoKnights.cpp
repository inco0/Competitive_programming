#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

#define ll long long

void solve(){
	ll n,corners,inter,total,j;
	cin >> n;
	vector<unsigned ll> non_viable(n);
	int x[3] = {0, 6, 28};
	non_viable[3] = 8;
	for (ll i=1; i <= n; i++){
		if (i-1 <= 1)
			cout << x[i-1] << "\n";
		else{
			total = i*i*(i*i-1)/2;
			corners = 8;
			j = i-2;
			if (i == 4){
				inter = 4 * j * 1 + (i-j)*4;
			}
			else{
				j -= 2;
				inter = 16 + 8;
				inter += (j-2)*16 + 24;
			}
			non_viable[i] = corners + inter + non_viable[i-2];
			cout << total - non_viable[i] << "\n";
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}
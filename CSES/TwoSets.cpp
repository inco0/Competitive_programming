#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

#define ll long long

void solve(){
	ll n,sum;
	cin >> n;
	vector <int> pos,pos2;
	sum = n*(n+1)/2;
	if ( sum % 2 != 0 )
		cout << "NO";
	else{
		cout << "YES" << "\n";
		sum /= 2;
		for (int i=n; i > 0; i--){
			if ( sum - i >= 0){
				sum -= i;
				pos2.push_back(i);
			}else{ 
				pos.push_back(i);
			}
		}
		cout << pos2.size() << endl;
		for (int i : pos2)
			cout << i << " ";
		cout << endl << pos.size() << endl;
		for (int i : pos){
			cout << i << " ";
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}
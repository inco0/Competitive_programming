#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

#define ll long long

void solve(){
	int n,input;
	ll c=0;
	cin >> n;
	vector <int> x;
	for (int i=0; i < n; i++){
		cin >> input;
		x.push_back(input);
		if (i > 0){
			if(x[i] < x[i-1]){
				c += x[i-1] - x[i];
				x[i] = x[i] + (x[i-1] - x[i]);
		    }	
		}
	}
	cout << c;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}
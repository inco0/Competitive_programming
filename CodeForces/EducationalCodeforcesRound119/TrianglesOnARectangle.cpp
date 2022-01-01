#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

void solve(){
	long long w,h,n,input,k=0;
	cin >> w >> h;
	for (int i=0;i<4;i++){
		cin >> n;
		vector <long long> x(n);
		for (auto &d : x){
			cin >> d;
		}
		if (i < 2)
			k = max(k, (x.back() - x.front())*h);
		else
			k = max(k, (x.back() - x.front())*w);
	}
	cout << k << "\n"; 
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
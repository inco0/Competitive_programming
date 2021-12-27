#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

#define ll long long

void solve(){
	int n;
	cin >> n;
	if (n < 4 && n > 1){
		cout << "NO SOLUTION";
	}
	else{
		for (int i=n-1; i >= 1; i-=2){
			cout << i << " ";
		}
		for (int i=n; i >= 1; i-=2){
			cout << i << " ";
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}
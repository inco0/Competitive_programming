#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	while (n){
		int N, M, X, Y;
		cin >> N >> M;
		for (int i = 0; i < n; i++){
			cin >> X >> Y;
			if ((Y == M) || (X == N)){
				cout << "divisa" << endl;
			}
			else if ((X > N) && (Y < M)){
				cout << "SE" << endl;
			}
			else if ((X > N) && (Y > M)){
				cout << "NE" << endl;
			}
			else if((X < N) && (Y > M)){
				cout << "NO" << endl;
			}
			else
				cout << "SO" << endl;
		}
		cin >> n;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int t;
	//cin >> t;
	//while (t--){
		solve();
	//}
}
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

void solve(){
	int n;
	char ch;
	vector<pair<int, int>> pos;
	cin >> n;
	vector<vector<char>> a(n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++){
			cin >> ch;
			if (ch == '*')
				pos.push_back(make_pair(i, j));
			a[i].push_back(ch);
		}
	if (pos[0].first == pos[1].first){
		if (pos[0].first < n-1){
			a[pos[0].first + 1][pos[0].second] = '*';
			a[pos[1].first + 1][pos[1].second] = '*';
		}
		else{
			a[pos[0].first - 1][pos[0].second] = '*';
			a[pos[1].first - 1][pos[1].second] = '*';
		}
	}
	else if (pos[0].second == pos[1].second){
		if (pos[0].second < n-1){
			a[pos[0].first][pos[0].second + 1] = '*';
			a[pos[1].first][pos[1].second + 1] = '*';
		}
		else{
			a[pos[0].first][pos[0].second - 1] = '*';
			a[pos[1].first][pos[1].second - 1] = '*';
		}
	}
	else{
		a[pos[0].first][pos[1].second] = '*';
		a[pos[1].first][pos[0].second] = '*';
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << a[i][j];
		}
		cout << endl;
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
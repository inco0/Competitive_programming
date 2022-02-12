#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <math.h>

using namespace std;

void solve(){
	int n;
	vector<pair<int, int>> maxes_a;
	cin >> n;
	vector<int> a(n);
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
		maxes_a.push_back(make_pair(a[i], i));
	}
	sort(maxes_a.begin(), maxes_a.end(), greater<pair<int,int>>());
	int curr_index = 0;
	for (int i = 0; i < n; i++){
		if (curr_index <= maxes_a[i].second){
			for (int j = curr_index; j <= maxes_a[i].second; j++){
				int diff = maxes_a[i].first - a[j];
				if (diff != 0)
					cout << diff + 1 << " ";
				else if (diff == 0 && a[j] == maxes_a[i].first && j < n && j != maxes_a[i].second)
					cout << 1 << " ";
				else{
					cout << 0 << " ";
				}
			}
			if (maxes_a[i].second != n-1)
				curr_index = maxes_a[i].second + 1;
			else
				curr_index = n-1;
		}
		
	}
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
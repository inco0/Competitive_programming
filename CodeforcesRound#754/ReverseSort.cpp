#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <math.h>
#include <deque>

using namespace std;

void solve(){
	int n, zeroes, ones;
	string s;
	cin >> n >> s;
	zeroes = count(s.begin(), s.end(), '0');
	ones = n - zeroes;
	int i = 0, j = n, count = 0;
	vector<vector<int>> zero_indices(n);
	vector<deque<int>> one_indices(n);
	while (i < zeroes){
		if (s[i] == '1'){
			while(j >= zeroes){
				if (s[j] == '0'){
					count = 1;
					zero_indices[count].push_back(i+1);
					one_indices[count].push_front(j+1);
					j--;		
					break;
				}
				j--;
			}
		}
		i++;
	}
	if (count == 0){
		cout << 0 << endl;
		return;
	}
	else{
		cout << count << endl;
		for(int i = 1; i < count+1; i ++){
			cout << zero_indices[i].size() + one_indices[i].size() << " ";
			for (auto x : zero_indices[i]){
				cout << x << " ";
			}
			for (auto x : one_indices[i]){
				cout << x << " ";
			}
			cout << endl;
		}
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
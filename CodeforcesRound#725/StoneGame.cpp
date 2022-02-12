#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <math.h>

using namespace std;

void solve(){
	int n;
	cin >> n;
	int min_pos, max_pos, minimum = INT_MAX, maximum = INT_MIN;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (a[i] > maximum){
			max_pos = i;
			maximum = a[i];
		}
		if (a[i] < minimum){
			min_pos = i;
			minimum = a[i];
		}
	}
	int rocks_for_min = min(n - min_pos, 0 + min_pos + 1);
	int rocks_for_max = min(n - max_pos, 0 + max_pos + 1);
	//cout << min_pos << " " << max_pos;
	if (rocks_for_min < rocks_for_max){
		if (abs(min_pos - max_pos) < rocks_for_max){
			cout << rocks_for_min + abs(min_pos - max_pos) << endl;
		}
		else
			cout << rocks_for_min + rocks_for_max << endl;
	}
	else{
		if (abs(min_pos - max_pos) < rocks_for_min){
			cout << rocks_for_max + abs(min_pos - max_pos) << endl;
		}
		else
			cout << rocks_for_min + rocks_for_max << endl;
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
#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>
#include <algorithm>

using namespace std;

void solve(int t){
	int N, c;
	cin >> N;
	vector<int> speed;
	while (N--){
		cin >> c;
		speed.push_back(c);
	}
	sort(speed.begin(), speed.end());
	cout << "Case " << t << ": " << speed.back() << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t,i=1;
	cin >> t;
	while (i<=t){
		solve(i);
		i++;
	}
}
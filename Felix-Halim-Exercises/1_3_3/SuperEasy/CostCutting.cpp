#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>
#include <algorithm>

using namespace std;

void solve(int t){
	vector<int> s(3);
	cin >> s[0] >> s[1] >> s[2];
	sort(s.begin(), s.end());
	cout << "Case " << t << ": " << s[1] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++){
		solve(i);
	}
}
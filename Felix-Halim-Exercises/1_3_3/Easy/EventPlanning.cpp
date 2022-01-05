#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

void solve(){
	int N, budget, hotels, weeks, minimum;
	while(cin >> N >> budget >> hotels >> weeks){
		minimum = budget+1;
		vector<int> beds(weeks), price(hotels);
		vector<bool> stay_home(hotels, true);
		for (int j = 0; j < hotels; j++){
			cin >> price[j];
			for (int i = 0; i < weeks; i++){
				cin >> beds[i];
				if (beds[i] >= N)
					stay_home[j] = false;
			}
		}
		for (int j = 0; j < hotels; j++){
			if (!stay_home[j]){
				minimum = min(price[j]*N, minimum);
			}
		}
		if (minimum < budget)
			cout << minimum << endl;
		else
			cout << "stay home" << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}
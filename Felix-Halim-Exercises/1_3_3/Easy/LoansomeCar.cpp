#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

void solve(){
	int dur;
	cin >> dur;
	while (dur > 0){
		int n_depr_rec, curr_month = 0, month;
		double worth, initial_cost, initialPayment, p;
		cin >> initialPayment >> worth >> n_depr_rec;
		vector<double> perc(dur+2);
		initial_cost = worth;
		double sum = 0, monthlyLoan = worth/dur;
		for (int i = 0; i < n_depr_rec; i++){
			cin >> month >> p;
			for (int j = month; j < dur+2; j++){
				perc[j] = p;
			}
		}
		worth += initialPayment;
		worth -= worth*perc[0];
		while(initial_cost - sum > worth){
			curr_month++;
			sum += monthlyLoan;
			worth -= worth*perc[curr_month];
		}
		cout << curr_month << " month";
		if (curr_month != 1)
			cout << "s";
		cout << endl;
		cin >> dur;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t=1;
	//cin >> t;
	while (t--){
		solve();
	}
}
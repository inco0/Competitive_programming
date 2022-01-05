#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>

using namespace std;

void solve(){
	long long n;
	cin >> n;
	int count = 0, five = 0, zero = 0;
	bool zero_found = false, five_found = false;
	string s = to_string(n);
	if (n % 25 == 0){
		cout << 0 << endl;
		return;
	}
	else{
		for (int i = s.length()-1; i >= 0; i--){
			if (s[i] == '0'){
				for (int j = i-1; j >=0; j--){
					if (s[j] == '0' || s[j] == '5'){
						zero_found = true;
						break;
					}
					zero++;
				}
			break;
			}	
		zero++;
		}
		for (int i = s.length()-1; i >= 0; i--){
			if (s[i] == '5'){
				for (int j = i-1; j >=0; j--){
					if (s[j] == '7' || s[j] == '2'){
						five_found = true;
						break;
					}
					five++;
				}
			break;
			}
		five++;	
		}
	}
	if (five_found && zero_found)
		cout << min(five,zero) << endl;
	else if (five_found)
		cout << five << endl;
	else
		cout << zero << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--){
		solve();
	}
}
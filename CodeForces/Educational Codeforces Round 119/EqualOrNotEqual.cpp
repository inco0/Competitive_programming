#include<iostream>
#include<string>

using namespace std;

void solve(){
	string s;
	cin >> s;
	int c,k,e=0,n=0;
	for (size_t i=0; i<s.length(); i++){
		if (s[i] == 'E')
			e++;
		else{
			n++;
			}
	}
	if (s[s.length()-1] == 'E'){
		if (n != 1)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	else if (s[s.length()-1] == 'N'){
		if (n != 1)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
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
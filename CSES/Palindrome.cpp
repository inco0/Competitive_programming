#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <unordered_map>
#include <deque>

using namespace std;

#define ll long long
#define mp(a,b) make_pair(a,b)

void solve(){
	int count = 0,len;
	string s;
	deque<char> out;
	cin >> s;
	len = s.length();
	unordered_map<char, int> chars;
	for (int i=0; i < len; i++){
		unordered_map<char, int>::iterator it = chars.find(s[i]);
		if ( it == chars.end()){
			pair <char,int> p = mp(s[i],1);
			chars.insert(p);
		}
		else{
			if (chars[s[i]] == 1){
				chars[s[i]] = 0;
				out.push_back(s[i]);
				out.push_front(s[i]);
				count += 2;
			}
			else{
				chars[s[i]] =  1;
			}
		}
		//cout << out << endl;
	}
	if (len % 2 == 0){
		if (count == len)
			for (auto & x : out)
				cout <<x;
		else
			cout << "NO SOLUTION";
	}
	else{
		if (count == len-1){
			for (auto it = chars.begin(); it != chars.end(); ++it){
				char key = it->first;
				if (it->second == 1){
					auto iter = out.begin();
					out.insert(iter+len/2, key);
					for (auto & x : out)
						cout << x;
				}
			}
		}
		else
			cout << "NO SOLUTION";
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}
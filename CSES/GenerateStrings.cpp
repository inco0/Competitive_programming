#include <iostream>
#include <vector>
#include <iterator>
#include <bits/stdc++.h>

using namespace std;

void solve(string s, string answer, unordered_set<string> &out){
	if(s.length() == 0)
    {
    	out.emplace(answer);
        return;
    }
	for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        string left_substr = s.substr(0,i);
        string right_substr = s.substr(i+1);
        string rest = left_substr + right_substr;
        solve(rest , answer+ch, out);
    }
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s,answer = "";
	cin >> s;
	unordered_set<string> out;
	vector<string> v_out;
	sort(s.begin(),s.end());
	solve(s, answer, out);
	for (auto i : out){
		v_out.push_back(i);
	}
	cout << out.size() << endl;
	sort(v_out.begin(),v_out.end());
	for (auto i : v_out){
		cout << i << endl;
	}
}
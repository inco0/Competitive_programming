#include <iostream>
#include <vector>
#include <iterator>
#include <math.h>
#include <ctime>
#include <tuple>
#include <bits/stdc++.h>


using namespace std;

void ex_1_2_3_2(){
	int n;
	cin >> n;
	double pi = 2*acos(0.0);
	printf("%.*f", n, pi);
}

void ex_1_2_3_3(){
	//TODO
	
}

void ex_1_2_3_4(){
	int r,n,tmp=INT_MAX;
	cin >> n;
	vector<int> a;
	while (n--){
		cin >> r;
		a.push_back(r);
	}
	sort(a.begin(), a.end());
	for (auto it = a.begin(); it != a.end(); it++){
		if (*it != tmp){
			cout << *it << " ";
			tmp = *it;
		}
	}
	
}

bool sortbymdy(const tuple<int, int, int>& a, 
              const tuple<int, int, int>& b)
{
	if (get<1>(a) < get<1>(b)) return true;
	if (get<1>(a) > get<1>(b)) return false;
	if (get<0>(a) < get<0>(b)) return true;
	if (get<0>(a) > get<0>(b)) return false;
	if (get<2>(a) > get<2>(b)) return true;
	if (get<2>(a) < get<2>(b)) return false;
	return false;
}

void ex_1_2_3_5(){
	int n,d,m,y;
	cin >> n;
	vector<tuple<int, int, int>> t;
	while (n--){
		cin >> d >> m >> y;
		t.push_back(make_tuple(d,m,y));
	}
	sort(t.begin(), t.end(), sortbymdy);
	for (auto it = t.begin(); it != t.end(); it++)
		cout << get<0>(*it) << " " << get<1>(*it) << " " << get<2>(*it) << endl;
}

void ex_1_2_3_7(){
	int n=1;
	vector<char> c{'A','B','C','D','E','F','G','H','I','J'};
	do{
		for (auto _ : c) cout << _ << " ";	
	}while(next_permutation(c.begin(), c.end()));
	
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ex_1_2_3_8();
}
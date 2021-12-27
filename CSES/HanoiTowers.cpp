#include <iostream>
#include <vector>
#include <iterator>
#include <stack>
#include <math.h>

using namespace std;

#define ll long long

void move(a, curr, helper_stack, end_stack){
	if (a == 1){
		int t = curr.top();
		curr.pop();
		cout << 1 << 3;
		end_stack.push(t);
	}
	move(a-1, helper_stack, curr, end_stack);
}

void solve(){
	int n;
	cin >> n;
	cout << pow(2,n)-1;
	stack<int> first,second,third;
	while (n--){
		first.push(n);
	}
	move(n, first, second, third);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}
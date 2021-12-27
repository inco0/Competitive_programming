#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <utility>

using namespace std;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

bool probablyPrimeFermat(long long n, long long iter=5) {
    if (n < 4)
        return n == 2 || n == 3;

    for (long long i = 0; i < iter; i++) {
        long long a = 2 + rand() % (n - 3);
        if (binpow(a, n - 1, n) != 1)
            return false;
    }
    return true;
}


void sol(){
	long long n,e,j,c,sum=0;
	sum = 0;
	cin >> n >> e;
	bool p[n] = {};
	long long d[n] = {};
	long long a[n] = {};
	pair<int, int> foo;
	stack<pair<int, int>> st; 
	for (long long i=0;i<n;i++){
		cin >> a[i];
		if (probablyPrimeFermat(a[i])) 
			p[i] = true;
		else 
			p[i] = false;
	}
	for (long long i=0;i<n;i++){
		bool flag = false;
		c = 0;
		if (d[i] == 0){
			if (p[i] == true ){
				j = i+e;
				while ((a[j] == 1) && (j < n)){
					c++;
					j += e;
				}
				sum += c;
			}
			else if (a[i] == 1){
				c = 1;
				j = i+e;
				while ((a[j] == 1 || p[j] == true) && j < n){
					if (a[j] != 1 && flag) break;
					if (p[j] == true && !flag){
						flag = true;
						sum += c;
						for (long long k=j-e;k>=i;k-=e)
							d[k] = 1;
					}
					else 
						if (flag)
							sum += c;
						else
							c++;
					j += e;
				}
				if (!flag){
					for (long long k=j-e;k>=i;k-=e)
							d[k] = 1;
				}
			}
		}
	}
	cout << sum << "\n";
}

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
  	long long t;
  	cin >> t;
  	while (t--)
  		sol();
}
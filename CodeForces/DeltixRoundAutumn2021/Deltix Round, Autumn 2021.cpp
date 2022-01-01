#include <iostream>
#include <math.h>

using namespace std;

void sol(){
	int n;
	cin >> n;
	int sum,k,max,a[n];
	sum = 0;
	k = 0;
	max = 0;
	for (int i=0; i < n; i++){
		cin >> a[i];
		if (a[i] % 2 == 1){
			if (a[i] > max ){
				sum += max;
				max = a[i];
			}
			else sum += a[i];	
		}
		else{
			while(a[i] > 1){
				a[i] /= 2;
				k += 1;
				if (a[i] % 2 == 1){
					if (a[i] > max ){
						sum += max;
						max = a[i];
					}
					else sum += a[i];
					break;
				}
			}
		} 
	}
	cout << (long long)(sum + pow(2,k)*max) << "\n";
}


int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		sol();
	}
}
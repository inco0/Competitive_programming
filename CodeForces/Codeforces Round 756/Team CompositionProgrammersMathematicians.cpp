#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c;
	c = 0;
	scanf("%d%d", &a, &b);
	int ma,mi;
    int temp;
    int diff;
	ma = max(a,b);
	mi = min(a,b);
	while (true){
		diff = ma - mi;
		if (ma == 0 || mi == 0 || ((ma+mi)<4)){
			break;
		}
		else if (diff == 0){
			c += ma / 2;
			break;
		}
		else if (ma == mi+1){
			c += mi / 2;
			break;
		}
		else if (diff >= mi*2){
			c += mi;
			break;
		}
		else{
			int k = min(min(diff/3+1, mi), ma/3);
			ma -= k*3;
			mi -= k;
			c += k;
		}
		temp = ma;
		ma = max(temp,mi);
		mi = min(temp,mi);
	}
	printf("%d\n",c);
}

int main()
{
	unsigned int t;
	scanf("%d", &t);
	while (t){
		t--;
		solve();
	}
}

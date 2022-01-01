#include <iostream>
#include <string>

using namespace std;
 
int fi(size_t lo, size_t hi, string s){
	int counter = 0;
	string sub = s.substr(lo, hi-lo+1);
	string abc = "abc";
	size_t pos = sub.find(abc);
	if (pos != string::npos) counter = 1;
	return counter;
}
 
int main() {
	ios::sync_with_stdio(false);
  	cin.tie(0);
    int n,q,fake_index,index,counter,bef,aft;
    string s,c,abc;
    abc = "abc";
    cin >> n >> q;
    cin >> s;
    size_t pos,lo,hi;
    pos = s.find(abc);
    while ( pos != string::npos){
		counter++;
		pos = s.find(abc, pos+3);
	}
    for (int i=0; i < q; i++){
    	cin >> fake_index >> c;
    	index = fake_index - 1;
    	if (index < 2){
    		lo = 0;
    		hi = index + 2;
    	}
    	else if(index + 2 > n-1){
    		lo = index - 2;
    		hi = n-1;
    	}
    	else{
    		lo = index - 2;
    		hi = index + 2;
    	}
    	bef = fi(lo, hi, s);
    	s.replace(index, 1, c);
		aft = fi(lo, hi, s);
		//cout << bef << " " << aft << " ";
		counter += aft - bef;
		cout << counter << "\n";
    }
	
}
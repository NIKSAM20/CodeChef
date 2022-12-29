#include <iostream>
using namespace std;

int main() {
	int t, n, x, r, p;
	cin >>t;
	while(t>0){
	    cin >>n >>x;
	    p=3*x;
	    r=n/p;
	    
	    cout <<r <<"\n";
	    
	    t--;
	}
	return 0;
}
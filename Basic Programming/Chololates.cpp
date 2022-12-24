#include <iostream>
using namespace std;

int main() {
	int t, x, y, z, m;
	cin >>t;
	while(t>0){
	    cin >>x >>y >>z;
	    m=5*x + 10*y;
	    cout <<m/z <<"\n";
	    
	    t--;
	}
	return 0;
}
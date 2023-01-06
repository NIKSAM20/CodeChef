#include <iostream>
using namespace std;

int main() {
	int t, x, y, z, ctr;
	cin >>t;
	while(t>0){
	    cin >>x >>y >>z;
	    while(x>0){
	        x-=y;
	        ctr++;
	    }
	    cout <<ctr*z <<"\n";
	    ctr=0;
	    t--;
	}
	return 0;
}
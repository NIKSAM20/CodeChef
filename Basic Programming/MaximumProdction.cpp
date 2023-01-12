#include <iostream>
using namespace std;

int main() {
	int t, x, y, z, d, xwork, ywork ;
	cin >>t;
	while(t>0){
	    cin >>d >>x >>y >>z;
	    xwork=7*x;
	    ywork=d*y+(7-d)*z;
	    
	    if(xwork>=ywork){
	        cout <<xwork <<"\n";
	    }
	    else{
	        cout <<ywork <<"\n";
	    }
	    t--;
	}
	return 0;
}
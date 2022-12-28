#include <iostream>
using namespace std;

int main() {
	int t, x, y,z;
	cin >>t;
	while(t>0){
	    cin >>x >>y >>z;
	    if(x>y && x>z){
	        cout <<"setter" <<"\n";
	    }
	    else if(y>x && y>z){
	        cout <<"tester" <<"\n";
	    }
	    else{
	        cout <<"editorialist" <<"\n";
	    }
	    t--;
	}
	return 0;
}
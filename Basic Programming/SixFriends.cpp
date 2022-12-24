#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >>t;
	
	while(t>0){
	    cin >>x >>y;
	    if(3*x<=2*y){
	        cout <<3*x <<"\n";
	    }
	    else{
	        cout <<2*y <<"\n";
	    }
	    t--;
	}
	return 0;
}
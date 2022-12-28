#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >>t;
	while(t>0){
	    cin >>x >>y;
	    if(10*y<=100*x){
	        cout <<"CLOTH" <<"\n";
	    }
	    else{
	        cout <<"DISPOSABLE" <<"\n";
	    }
	    
	    t--;
	}
	return 0;
}
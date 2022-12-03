#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	while(t>0){
	    cin >>x >>y;
	    if(x>y){
	        cout <<x-y <<"\n";
	    }
	    else{
	        cout <<"0\n";
	    }
	    
	    t--;
	}
	return 0;
}
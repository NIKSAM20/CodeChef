#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >>t;
	while(t>0){
	    cin >>x >>y;
	    if(x<y){
	        cout <<x <<"\n";
	    }
	    else{
	        cout <<y <<"\n";
	    }
	    t--;
	}
	return 0;
}
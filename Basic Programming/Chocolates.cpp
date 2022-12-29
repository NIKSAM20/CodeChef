#include <iostream>
using namespace std;

int main() {
	int t, c, x, y;
	cin >>t;
	while(t>0){
	    cin >>c >>x >>y;
	    cout <<(c-x)*y <<"\n";
	    t--;
	} 
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, p, q;
	cin >>t;
	while(t>0){
	    cin >>x >>p >>q;
	    cout << x*(p-q) <<"\n";
	    
	    t--;
	}
	return 0;
}
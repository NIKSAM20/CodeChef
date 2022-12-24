#include <iostream>
using namespace std;

int main() {
	int n, m, t, x;
	cin  >>t;
	
	while(t>0){
	    cin >>n >>m >>x;
	    cout <<(n+m)*2*x <<"\n";
	        
	    t--;
	}
	return 0;
}
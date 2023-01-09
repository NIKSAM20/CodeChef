#include <iostream>
using namespace std;

int main() {
	int t, x, m, d;
	cin >>t;
	while(t>0){
	    cin >>x >>m >>d;
	    if((m*x)>=(x+d)){
	        cout<<x+d <<"\n";
	    }
	    else{
	        cout <<m*x <<"\n";
	    }
	    
	    t--;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int t, n, m, k;
	cin >>t;
	while(t>0){
	    cin >>n >>m >>k;
	    if((m-n-k)>=0){
	        cout <<"yes" <<"\n";
	    }
	    else{
	        cout <<"no" <<"\n";
	    }
	    
	    t--;
	}
	return 0;
}
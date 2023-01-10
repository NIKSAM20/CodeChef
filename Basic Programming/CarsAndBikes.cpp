#include <iostream>
using namespace std;

int main() {
	int t, n, ctr=0;
	cin >>t;
	while(t>0){
	    cin >>n;
	    ctr=n/4;  //Number of cars
	    n=n-4*ctr;
	    if(n>=2){
	        cout <<"Yes" <<"\n";
	    }
	    else{
	        cout <<"No" <<"\n";
	    }
	    
	    t--;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, r1, r2, r3;
	cin >>t;
	while(t>0){
	    cin >>r1 >>r2 >>r3;
	    if(r1 >(r2 + r3)){
	        cout <<"YES" <<"\n";
	    }
	    else if(r2 >(r1+r3)){a
	        cout <<"YES" <<"\n";
	    }
	    else if(r3 >(r1+r2)){
	        cout <<"YES" <<"\n";
	    }
	    else{
	        cout <<"NO" <<"\n";
	    }
	    
	    t--;
	}
	return 0;
}
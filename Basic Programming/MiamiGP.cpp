#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >>t;
	while(t>0){
	    cin >>x >>y;
	    if(y<=1.07*x){
	        cout <<"YES" <<"\n";
	    }
	    else{
	        cout <<"NO" <<"\n";
	    }
	    
	    t--;
	}
	return 0;
}
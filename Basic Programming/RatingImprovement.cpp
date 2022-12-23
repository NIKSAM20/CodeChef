#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >>t;
	while(t>0){
	    cin >>x >>y;
	    if (y>=x && y<=(x+200)){
	        cout <<"YES" <<"\n";
	    }
	    else{
	        cout <<"NO" <<"\n";
	    }
	    t--;
	}
	return 0;
}
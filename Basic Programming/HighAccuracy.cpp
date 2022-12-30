#include <iostream>
using namespace std;

int main() {
	int t, x;
	cin >>t;
	while(t>0){
	    cin >>x;
	    if((x%3)==1){
	        cout <<"2" <<"\n";
	    }
	    else if((x%3)==2){
	        cout <<"1" <<"\n";
	    }
	    else{
	        cout <<"0" <<"\n";
	    }
	    
	    t--;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int t, x;
	cin >>t;
	while(t>0){
	    cin >>x;
	    if((x+3)<=10){
	        cout <<"yes" <<"\n";
	    }else{
	        cout <<"no" <<"\n";
	    }
	    
	    t--;
	}
	return 0;
}
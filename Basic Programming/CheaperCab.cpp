#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >>t;
	
	while(t>0){
	    cin >>x >>y;
	    
	    if(x<y){
	        cout <<"FIRST" <<"\n";
	    }
	    else if(y<x){
	        cout <<"SECOND" <<"\n";
	    }
	    else{
	        cout <<"ANY" <<"\n";
	    }
	    
	    t--;
	}
	return 0;
}
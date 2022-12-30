#include <iostream>
using namespace std;

int main() {
	int t, a, b, c;
	cin >>t;
	while(t>0){
	    cin >>a >>b >>c;
	    if((a+b)%2!=0){
	        cout <<"yes" <<"\n";
	    }
	    else if((b+c)%2!=0){
	        cout <<"yes" <<"\n";
	    }
	    else if((a+c)%2!=0){
	        cout <<"yes" <<"\n";
	    }
	    else{
	        cout <<"no" <<"\n";
	    }
	    	    
	    t--;
	}
	return 0;
}
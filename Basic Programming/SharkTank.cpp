#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	cin >>t;
	while(t>0){
	    cin >>a >>b;
	    if(10*a == 5*b){
	        cout <<"Any" <<"\n";
	    }
	    else if(10*a >= 5*b){
	        cout <<"First" <<"\n";
	    }
	    else{
	        cout <<"Second" <<"\n";
	    }
	    
	    t--;
	} 
	return 0;
}
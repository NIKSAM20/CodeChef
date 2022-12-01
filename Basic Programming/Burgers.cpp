#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a, b;
	cin>> t;
	while(t>0){
	    cin>> a;
	    cin>> b;
	    if(a<=b){
	        cout<< a <<"\n";
	    }
	    else{
	        cout<< b <<"\n";
	    }
	    t--;
	}
	return 0;
}
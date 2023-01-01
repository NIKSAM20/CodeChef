#include <iostream>
using namespace std;

int main() {
	int t, a, b, c;
	cin >>t;
	while(t>0){
	    cin >>a >>b >>c;
	    if ((a+b+c)<35){
	        cout <<"fail";
	    }
	    else{
	        cout <<"pass";
	    }
	    t--;
	}
	return 0;
}
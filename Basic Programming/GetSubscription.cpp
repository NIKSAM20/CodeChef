#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x;
	cin >>t;
	while(t>0){
        cin >>x;
        if(x<=30){
            cout <<"NO\n";
        }
        else{
            cout <<"YES\n";
        }
	    t--;
	}
	return 0;
}
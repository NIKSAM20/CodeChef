#include <iostream>
using namespace std;

int main() {
	int n, ctr=0;
	cin >>n;
	for(int i=1; i<n; i++){
	    for(int j=1; j<n; j++){
	        if((i+j)==n){
	            ctr++;
	        }
	    }
	}
	cout <<ctr;
	return 0;
}
#include <iostream>
using namespace std;

int main() {
    int t, x;
	cin >>t;
	while(t>0){
	    int ctr=0;
	    cin >>x;
        while(x>0){
            if(x%10==0){
                x-=10;
            }
            else{
                x-=1;
                ctr++;
            }
        }
        cout <<ctr <<"\n";
	    
	    t--;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int t, arr[7];
	cin >>t;
	
	while(t>0){
	    for(int i=0; i<7; i++){
	        cin >>arr[i];
	    }
	    int ctr=0;
	    for(int i=0; i<7; i++){
	        if(arr[i]==1){
	            ctr++;
	        }
	    }
	    if(ctr>=4){
	        cout <<"Yes" <<"\n";
	    }
	    else{
	        cout <<"No" <<"\n";
	    }
	    t--;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int t, x, y, z;
	cin >>t;
	while(t>0){
	    cin >>x >>y >>z;
	    
	    if(z%x==0 && z%y==0){
	        cout <<"Any" <<"\n";
	    }
	    else if(z%x==0){
	        cout <<"Chicken" <<"\n";
	    }
	    else if(z%y==0){
	        cout <<"Duck" <<"\n";
	    }
	    else{
	        cout <<"None" <<"\n";
	    }
	    
	    t--;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int t, x;
    cin >>t;
    while(t>0){
        cin >>x;
        if(x<4){
            cout <<"MILD" <<"\n";
        }
        else if(x>=4 && x<7){
            cout <<"MEDIUM" <<"\n";
        }
        else{
            cout <<"HOT" <<"\n";
        }

        t--;
    }
    return 0;
}
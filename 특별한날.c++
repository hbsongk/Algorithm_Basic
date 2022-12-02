#include <iostream>
using namespace std;
int m, d;
int sm = 2, sd = 18;
int main(){
    cin >> m;
    cin >> d;
    if(m < sm){
        cout << "Before";
    }
    else if(m==sm){
        if(d<sd){
            cout << "Before";
        }
        else if(d==sd){
            cout << "Special";
        }
        else{
            cout << "After";
        }  
    }
    else{
        cout << "After";
    }
    return 0;
}
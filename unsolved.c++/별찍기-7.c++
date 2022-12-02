#include <iostream>
using namespace std;
int n;
int main(){
    cin >> n;
    for (int i = 0; i <2*n-1;i++){
        if(i < n){
            for (int j = i;j<n-1;j++){
                cout << '&';
            }
            for (int j = 0; j < 2*i+1;j++){
                cout << '*';
            }
            cout << endl;
        }
        else{
            for (int j = n;j<=i;j++){
                cout << '&';
            }
            for (int j = i; j <=2*i-1 ;j++){
                cout << '*';
            }
            cout << endl;
        }

    }
    return 0;
}
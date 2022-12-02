#include <iostream>
using namespace std;
int n;
int sum;
int main(){
    for (int i = 0; i < 3;i++){
        sum = 0;
        for (int j = 0; j < 4;j++){
            cin >> n;
            sum += n;
        }
        if(sum == 0){
            cout << 'D' << endl;
        }
        if(sum == 1){
            cout << 'C' << endl;
        }
        if(sum == 2){
            cout << 'B' << endl;
        }
        if(sum == 3){
            cout << 'A' << endl;
        }
        if(sum == 4){
            cout << 'E' << endl;
        }
    }
    return 0;
}
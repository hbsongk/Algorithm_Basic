#include <iostream>
#include <string>
using namespace std;
int sum;
int main(){
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            sum += i + j;
        }
    }
    for (int i = 0; i < 6;i++){
        sum += i;
    }
    cout << sum;

    return 0;
}
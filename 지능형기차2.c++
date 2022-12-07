#include <iostream>
using namespace std;
int a, b;
int sum;
int main(){
    for (int i = 0; i < 10;i++){
        cin >> a >> b;
        sum -= a;
        sum += b;
    }

    return 0;
}
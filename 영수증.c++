#include <iostream>
using namespace std;
int price_sum;
int price;

int main(){
    cin >> price_sum;
    for (int i = 0; i < 9;i++){
        cin >> price;
        price_sum -= price;
    }
    cout << price_sum;
    
    return 0;
}
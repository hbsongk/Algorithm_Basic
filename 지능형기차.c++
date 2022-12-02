#include <iostream>
using namespace std;
int x, y;
int sum;
int maxPeople;

void calcMax(int out, int in){
    sum = sum - out + in;
    if(sum>10000)
        sum = 10000;
    maxPeople = max(maxPeople, sum);
    
}
int main(){
    for (int i = 0; i < 4;i++){
        cin >> x >> y;
        calcMax(x, y);
    }
    cout << maxPeople;
}
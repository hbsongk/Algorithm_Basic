#include <iostream>
using namespace std;
int n, element;
int sum, pre;
int total;
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> element;
        sum =  element * (i + 1);
        cout << sum - pre << ' ';
        pre = sum;
    }

    return 0;
}
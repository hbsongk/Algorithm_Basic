#include <iostream>
using namespace std;
int n, e, element;
int _max = -1, _min = 987654321;
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> element;
        if(_max < element)
            _max = element;
        if(_min > element)
            _min = element;
    }
    cout << _max - _min;

    return 0;
}
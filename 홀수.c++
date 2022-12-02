#include <iostream>
using namespace std;
int n;
int sum;
int _min = 987654321;
int main(){
    for (int i = 0; i < 7;i++){
        cin >> n;
        if(n&1){
            sum += n;
            _min = min(_min, n);
        }
    }
    if(!sum){
        cout << -1;
        return 0;
    }
    cout << sum << endl;
    cout << _min;

    return 0;
}
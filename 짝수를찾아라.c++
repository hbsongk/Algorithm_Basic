#include <iostream>
using namespace std;
int n;
int a;
int sum;
int main(){
    cin >> n;
    while(n--){
        sum = 0;
        int _min = 987654321;
        for (int i = 0; i < 7;i++){
            cin >> a;
            if(a%2==0){
                sum += a;
                _min = min(_min, a);
            }
        }
        cout << sum << ' ' << _min << endl;
    }

    return 0;
}
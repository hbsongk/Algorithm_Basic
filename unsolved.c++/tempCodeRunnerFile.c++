#include <iostream>
using namespace std;
int m, n, sum, _min = 987654321;

int prime_number(int num){
    if(num==2)
        return 0;
    for (int j = 2; j < num;j++){
        if(!(num % j))
            return 0;
    }
    return 1;
}
int main(){
    cin >> m >> n;
    for (int i = m; i <= n;i++){
        if(prime_number(i)){
            sum += i;
            _min = min(_min, i);
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
#include <iostream>
using namespace std;
int n;
int cnt;
int main(){
    cin >> n;
    if(n==3 || n==1){
        cout << -1;
        return 0;
    }
    cnt = n/5;
    n %= 5;
    if(n%2==0){
        cnt += n / 2;
    }
    else{
        cnt -= 1;
        n += 5;
        cnt += n / 2;
    }
    cout << cnt;
    return 0;
}
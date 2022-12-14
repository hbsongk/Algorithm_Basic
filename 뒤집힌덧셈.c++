#include <iostream>
using namespace std;

int a, b;
int rev(int n){
    int res=0, rem=0;
    while(n!=0){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main(){
    cin >> a >> b;
    cout << rev(rev(a) + rev(b));
    return 0;
}
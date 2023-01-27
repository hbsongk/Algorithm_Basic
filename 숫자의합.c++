#include <iostream>
using namespace std;
int n, sum;
string s;
int main(){
    cin >> n;
    cin >> s;
    for (char c: s){
        int a = c - '0';
        sum += a;
    }
    cout << sum;
    return 0;
}
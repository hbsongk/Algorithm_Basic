#include <iostream>
using namespace std;
string s;
int sum = 1;
int main(){
    cin >> s;
    for(char c : s){
        if(c==',')
            sum++;
    }
    cout << sum;
    return 0;
}
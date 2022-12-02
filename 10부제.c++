#include <iostream>
using namespace std;
int n;
int sum;
string s;

int main(){
    cin >> n;
    for (int i = 0; i < 5;i++){
        cin >> s;
        int car_num = s[0] - '0';
        if(n == car_num)
            sum++;
    }
    cout << sum;

    return 0;
}
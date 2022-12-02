#include <iostream>
using namespace std;
int t;
int n;
int number;
int sum;
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        sum = 0;
        for (int i = 0; i < n;i++){
            cin >> number;
            sum += number;
        }
        cout << sum << endl;
    }
    return 0;
}
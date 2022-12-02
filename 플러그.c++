#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int n;
int connect;
int sum = 1;
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> connect;
        sum = sum - 1 + connect;
    }
    cout << sum;

    return 0;
}
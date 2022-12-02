#include <iostream>
using namespace std;

int t;
int first, second;
int main(){
    cin >> t;
    for (int i = 1; i <= t;i++){
        cin >> first >> second;
        printf("Case %d: %d\n", i, first + second);
    }
    return 0;
}
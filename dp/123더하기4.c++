#include <iostream>
using namespace std;

// wt? 1,2,3
int t;
int n;
int block[10001];
int main(){
    cin >> t;
    fill(&block[0], &block[10001], 1);
    for (int i = 2; i < 10001;i++){
        block[i] += block[i-2];
    }
    for (int i = 3; i < 10001;i++){
        block[i] += block[i - 3];
    }
    for (int i = 0; i < t; i++){
        cin >> n;
        cout << block[n] << '\n';
    }
    return 0;
}
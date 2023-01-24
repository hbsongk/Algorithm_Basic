#include <iostream>
using namespace std;
int n, x;
int dp[15];
int way(int x){
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <=x;i++){
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[x];
} 
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        cout << way(x) << '\n';
    } 
    return 0;
}
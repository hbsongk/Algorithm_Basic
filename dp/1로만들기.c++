#include <iostream>
using namespace std;
typedef long long ll;
int x;
ll dp[1000004];
int main(){
    cin >> x;
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for (int i = 4; i <= x;i++){
        dp[i] = dp[i - 1] + 1;
        if(i%3==0){
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
        if(i%2==0){
            dp[i] = min(dp[i], dp[i/2] +1);
        }
    }
    cout << dp[x];

    return 0;
}
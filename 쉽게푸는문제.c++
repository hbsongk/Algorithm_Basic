#include <iostream>
#include <math.h>
using namespace std;
int arr[1001], k = 1, n, m, ans = 0;
int main(){
    for (int i = 1; i <= 1000;i++){
        for (int j = 1; j <= i;j++){
            arr[k] = i;
            if(k>1000){
                break;
            }
            k++;
        }
    }
    cin >> n >> m;
    for (int i = n; i <= m;i++){
        ans += arr[i];
    }
    cout << ans;
    
    return 0;
}

// 배여
#include <iostream>
using namespace std;

int n;
int sum;
int sum2;
int main(){
    cin >> n;
    for (int i = 0; i <= n;i++){
        for (int j = 0; j <= n;j++){
            if(i==j){
                sum2 += i + j;
            }
            else{
                sum += i + j;
            }
        }
    }
    cout << sum / 2 + sum2;

    return 0;
}
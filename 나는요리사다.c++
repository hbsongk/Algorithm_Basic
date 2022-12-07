#include <iostream>
using namespace std;
int score;
int sum;
int ranking;
int res = -1;

int main(){
    for (int i = 0; i < 5;i++){
        sum = 0;
        for (int j = 0; j < 4;j++){
            cin >> score;
            sum += score;
        }
        if(res<sum){
            res = sum;
            ranking = i;
        }
    }
    cout << ranking+1 << ' ' << res;

    return 0;
}
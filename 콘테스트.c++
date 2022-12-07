#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n = 20;
int sum1, sum2;
int score;
int main(){
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n;i++){
        cin >> score;
        if(i<10){
            v1.push_back(score);
        }
        else v2.push_back(score);
    }    
    sort(v1.begin(), v1.end(),greater<>());
    sort(v2.begin(), v2.end(),greater<>());
    for (int i = 0; i < 3;i++){
        sum1 += v1[i];
        sum2 += v2[i];
    }
    cout << sum1 << ' ' << sum2;

    return 0;
}
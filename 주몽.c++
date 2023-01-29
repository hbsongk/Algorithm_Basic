#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, cnt,sum, goal;
vector<int> v;

int main(){
    cin >> n;
    cin >> goal;
    for (int i = 0; i < n;i++){
        int element;
        cin >> element;
        v.push_back(element);
    }
    for (int i = 0; i < n;i++){
        for (int j = i+1; j < n;j++){
            sum = 0;
            sum += (v[i] + v[j]);
            if(sum==goal)
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}
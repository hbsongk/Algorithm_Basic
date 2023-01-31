#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, goal, sum, _max;
vector<int> v;
int main(){
    cin >> n >> goal;
    for (int i = 0; i < n;i++){
        int element;
        cin >> element;
        v.push_back(element);
    }
    sort(v.begin(), v.end());
    do{
        sum = 0;
        for (int i = 0; i < 3;i++){
            sum += v[i];
        }
        if (sum <= goal){
            _max = max(sum, _max);
        }
    }while(next_permutation(v.begin(),v.end()));

    cout << _max;

    return 0;
}
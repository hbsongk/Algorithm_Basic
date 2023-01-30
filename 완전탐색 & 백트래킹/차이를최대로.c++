#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int sum, _max;
vector<int> v;
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        int element;
        cin >> element;
        v.push_back(element);
    }
    sort(v.begin(), v.end());
    do{
        sum = 0;
        for (int i = 0; i < n-1;i++){
            sum += abs(v[i] - v[i + 1]);
        }
        _max = max(_max,sum);
    } while (next_permutation(v.begin(), v.end()));

    cout << _max;
    return 0;
}
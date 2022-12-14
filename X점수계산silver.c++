#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int sum;
int arr[150];
vector<int> v;
vector<int> v2;
int main(){
    for (int i = 0; i < 8;i++){
        cin >> n;
        v.push_back(n);
        arr[n] = i + 1;
    }
    sort(v.begin(), v.end());
    for (int i = 3; i < 8;i++){
        sum += v[i];
        v2.push_back(arr[v[i]]);
    }
    cout << sum << endl;
    sort(v2.begin(), v2.end());
    for(int i : v2)
        cout << i << ' ';

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int sum;
vector<int> v;
int main(){
    for (int i = 0; i < 5;i++){
        cin >> n;
        sum += n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cout << sum / 5 << endl << v[2];

    return 0;
}
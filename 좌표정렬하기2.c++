#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int x, y;
vector<vector<int>> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> x >> y;
        v.push_back({y, x});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n;i++){
        cout << v[i][1] << ' ' << v[i][0] << '\n';
    }
    return 0;
}
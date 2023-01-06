#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> v;
int n;
int x, y;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> x >> y;
        v.push_back({x, y});
    }
    stable_sort(v.begin(), v.end());
    for (int j = 0; j < n;j++){
        cout << v[j][0] << ' ' << v[j][1] << '\n';
    }
    return 0;
}
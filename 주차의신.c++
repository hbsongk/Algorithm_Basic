#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int t;
int n;
int a;
vector<int> v;
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        v.clear();
        for (int i = 0; i < n;i++){
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        cout << (v.back() - v.front()) * 2 << endl;
    }
    return 0;
}
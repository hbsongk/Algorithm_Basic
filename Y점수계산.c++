#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int N,sum=0;
    vector<vector<int>> v;
    vector<int> v2;
    for(int i=1;i<=8;i++){
        int tmp;
        cin>>tmp;
        v.push_back({tmp,i});
    }
    sort(v.begin(), v.end());
    for (int i = 3; i < 8;i++){
        sum += v[i][0];
        v2.push_back(v[i][1]);
    }
    cout << sum << endl;
    sort(v2.begin(), v2.end());
    for (int i = 0; i < 5;i++){
        cout << v2[i] << ' ';
    }
}
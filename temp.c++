#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int>> v;

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first > b.first;
}
int main(){
    v.push_back({5,4});
    v.push_back({5,6});
    v.push_back({5,7});

    sort(v.begin(), v.end(), compare);
    cout << v[0].first << v[0].second << endl;
    cout << v[1].first << v[1].second << endl;
    cout << v[2].first << v[2].second << endl;

    return 0;
}
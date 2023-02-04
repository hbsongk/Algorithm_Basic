#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
map<char, int> m;
vector<vector<int>> v(5, vector<int>(5, 0));
int main(){
    fill(v[0].begin(), v[4].end(), 4);
    cout << v[0][0];
    return 0;
}
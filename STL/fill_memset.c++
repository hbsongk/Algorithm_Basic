#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <memory.h>
using namespace std;
vector<int> v(5, 2);
int main(){
    memset(&v[0], -1, sizeof(v));
    cout << v[0] << endl;
    // memset(v.begin(), -1, sizeof(v));
    // cout << v[0] << endl;
    fill(v.begin(), v.end(), 3);
    cout << v[0] << endl;
    fill(&v[0], &v[4], 4);
    cout << v[0] << endl;

    return 0;
}
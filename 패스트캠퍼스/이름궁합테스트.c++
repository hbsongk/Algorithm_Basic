#include <iostream>
#include <vector>
using namespace std;
int n, m;
int sum;
int _max = -1;
vector<int> v;
vector<int> v2;

string s1, s2;
int arr[26] = {3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
int recursive(vector<int>v){
    v2.clear();
    if(v.size()==2){
        int ret;
        ret = v[0] * 10 + v[1];
        return ret;
    } 
    for (int i = 1; i < v.size();i++){
        v2.push_back((v[i-1] + v[i]) % 10);
    }
    int ret = recursive(v2);
    return ret;
}

int main(){
    cin >> n >> m;
    cin >> s1 >> s2;

    _max = max(n, m);
    for (int i = 0; i < _max;i++){
        int idx = s1[i] - 'A';
        int idx2 = s2[i] - 'A';
        if(s1[i]!=0)v.push_back(arr[idx]);
        if(s2[i]!=0)v.push_back(arr[idx2]);
    }
    cout << recursive(v) << "%";

    return 0;
}
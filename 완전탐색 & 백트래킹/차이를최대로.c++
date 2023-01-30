#include <iostream>
#include <vector>
using namespace std;
int n, _max, sum;
int a[10];
int visited[104];
vector<int> v;
void dfs(){
    // 조건
    if(v.size()==n){
        sum = 0;
        for (int i = 0; i < n-1;i++){
            sum += abs(v[i] - v[i + 1]);
            _max = max(_max, sum);
        }
        return;
    }
    for (int i = 0; i < n; i++){
        if(visited[i])
            continue;
        v.push_back(a[i]);
        visited[i] = 1;
        dfs();
        v.pop_back();
        visited[i] = 0;
    }
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    dfs();
    cout << _max;
    return 0;
}
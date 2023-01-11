#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
int choose[10004];
int visited[10004];
int element;
vector<int> v;

void dfs(int level){
    if(level==m){
        for (int i = 0; i < m;i++){
            cout << v[choose[i]] << ' ';
        }
        cout << '\n';
        return;
    }
    int pre = -1;
    for (int i = 0; i < n;i++){
        if(visited[i] || pre==v[i])
            continue;
        pre = v[i];
        choose[level] = i;
        visited[i] = 1;
        dfs(level + 1);
        visited[i] = 0;
    }
}
int main(){
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        cin >> element;
        v.push_back(element);
    }
    sort(v.begin(), v.end());
    dfs(0);
    return 0;
}
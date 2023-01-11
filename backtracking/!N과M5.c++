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
            cout << choose[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < n;i++){
        if(visited[v[i]])
            continue;
        choose[level] = v[i];
        visited[v[i]] = 1;
        dfs(level + 1);
        visited[v[i]] = 0;
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
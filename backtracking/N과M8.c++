#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
int choose[10004];
int element;
vector<int> v;

void dfs(int level, int flag){
    if(level==m){
        for (int i = 0; i < m;i++){
            cout << choose[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = flag; i < n;i++){
        choose[level] = v[i];
        dfs(level + 1,i);
    }
}
int main(){
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        cin >> element;
        v.push_back(element);
    }
    sort(v.begin(), v.end());
    dfs(0,0);
    
    return 0;
}
#include <iostream>
using namespace std;
int n, m;
int choose[10];
int visited[10];

void dfs(int level,int flag){
    if(level==m){
        for (int i = 0; i < m;i++){
            cout << choose[i] << ' ';
        }
        cout << '\n';
    }
    for (int i = flag; i <= n;i++){
        if(visited[i])
            continue;
        choose[level] = i;
        visited[i] = 1;
        dfs(level + 1,i);
        visited[i] = 0;
    }
}
int main(){
    cin >> n >> m;
    dfs(0,1);
    return 0;
}
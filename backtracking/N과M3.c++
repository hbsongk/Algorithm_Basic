#include <iostream>
using namespace std;
int n, m;
int choose[10];

void dfs(int level){
    if(level==m){
        for (int i = 0; i < m;i++){
            cout << choose[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n;i++){
        choose[level] = i;
        dfs(level + 1);
    }
}
int main(){
    cin >> n >> m;
    dfs(0);
    return 0;
}
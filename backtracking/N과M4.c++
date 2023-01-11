#include <iostream>
using namespace std;
int n, m;
int choose[10];
void dfs(int level,int flag){
    if(level==m){
        for (int i = 0; i < m;i++){
            cout << choose[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = flag; i <= n;i++){
        choose[level] = i;
        dfs(level + 1,i);
    }
}
int main(){
    cin >> n >> m;
    dfs(0,1);
    return 0;
}
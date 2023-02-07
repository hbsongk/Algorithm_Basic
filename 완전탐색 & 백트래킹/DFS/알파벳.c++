#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
int _max;
int visited[24][24];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
char arr[24][24];
vector<char> pass;

void dfs(int x, int y,int level){
    _max = max(_max, level);
    pass.push_back(arr[x][y]);
    visited[x][y] = 1;
    for (int k = 0; k < 4;k++){
        int nx = x+dx[k];
        int ny = y+dy[k];

        if(nx<0 || ny<0 || nx>=n || ny>=m)
            continue;
        if(visited[nx][ny])
            continue;
        if(find(pass.begin(),pass.end(),arr[nx][ny])!=pass.end())
            continue;
        dfs(nx, ny, level+1);
        pass.pop_back();
        visited[nx][ny] = 0;
    }
    return;
}
int main(){
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }
    dfs(0, 0, 1);
    cout << _max;
    return 0;
}
#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;
int n, m;
int sum;
int _max = -1;
int arr[504][504];
int visited[504][504];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
vector<int> v;
void dfs(int x,int y){
    v.push_back(arr[x][y]);
    visited[x][y] = 1;
    if(v.size()==4){
        sum = 0;
        for(int num: v){
            sum += num;
        }
        _max = max(sum, _max);
        return;
    }
    if(v.size()==3){  
        if(visited[x][y]&&visited[x][y-1]&&visited[x][y-2]){
            dfs(x + 1,y);
            dfs(x - 1,y);
        }
        else if(visited[x][y]&&visited[x][y+1]&&visited[x][y+2]){
            dfs(x + 1,y);
            dfs(x - 1, y);
        }
    }

    for (int i = 0; i < 4;i++)
        {
            int ny = dy[i] + y;
            int nx = dx[i] + x;
            if(ny<0 || nx<0 || ny>=m || nx>=m)
                continue;
            if(visited[nx][ny])
                continue;
            dfs(nx, ny);
            v.pop_back();
            visited[x][y] = 0;
        }
    visited[x][y] = 0;
}
int main(){
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            dfs(i, j);
            v.clear();
        }
    }
    cout << _max;
    return 0;
}
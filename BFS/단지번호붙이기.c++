#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int total_cnt;
int cnt;
int sum;
int arr[30][30];
int visited[30][30];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
vector<int> v;
void dfs(int x, int y){
    cnt++;
    visited[x][y] = 1;
    for (int k = 0; k < 4;k++){
        int nx = x + dx[k];
        int ny = y + dy[k];

        if(nx<0 || ny<0 || nx>=n || ny>=n || arr[nx][ny]==0)
            continue;
        if (visited[nx][ny]) continue;
        dfs(nx, ny);
    }
    return;
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int jj = 0; jj < n;jj++){
            scanf("%1d", &arr[i][jj]);
        }
    }

    for (int i = 0; i < n;i++){
        for (int jj = 0; jj < n;jj++){
            if(visited[i][jj] || arr[i][jj]==0)
                continue;
            dfs(i, jj);
            v.push_back(cnt);
            cnt = 0;
            total_cnt++;
        }
    }
    sort(v.begin(), v.end());
    cout << total_cnt << "\n";
    for(int i : v)
        cout << i << "\n";

    return 0;
}
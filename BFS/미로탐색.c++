#include <iostream>
#include <queue>
using namespace std;
int n, m;
int sum;
int arr[104][104];
int visited[104][104];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int,int>> q;
int main(){
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    q.push({0, 0});
    visited[0][0] = 1;
    while(!q.empty()){
        pair<int,int>p = q.front();q.pop();
        for (int k = 0; k < 4;k++){
            int ny = p.second + dy[k];
            int nx = p.first + dx[k];

            if(nx < 0 || ny < 0 || nx >=n || ny>=m || arr[nx][ny]==0) continue;
            if(visited[nx][ny]) continue;
            q.push({nx, ny});
            visited[nx][ny] = 1;
            arr[nx][ny] += arr[p.first][p.second];
        }      
    }
    cout << arr[n - 1][m - 1];
    return 0;
}

// 비슷한 문제 있었나 생각
// 한 기능 끝날때마다 검산
// 그림 생각하기
// 마지막에 예시 넣기
// 뭘 제거해야 할지

// visited[nx][ny] = 1
// break 상위 반복문 생각 못함.
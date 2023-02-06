#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int arr[30][30];
int visited[30][30];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
vector<int> v;
queue<pair<int,int>> q;

int bfs(int x, int y){
    int cnt = 0;
    q.push({x, y});
    visited[x][y] = 1;
    while(!q.empty()){
        pair<int,int>p = q.front();
        q.pop();
        cnt++;
        for (int k = 0; k < 4;k++){
            int nx = p.first + dx[k];
            int ny = p.second + dy[k];

            if(nx<0 || ny<0 || nx>=n || ny>=n ||arr[nx][ny]==0)
                continue;
            if(visited[nx][ny])
                continue;
            q.push({nx, ny});
            visited[nx][ny] = 1;
        }
    }
    return cnt;
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(visited[i][j] || arr[i][j]==0) continue;
            v.push_back(bfs(i, j));
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for(int i : v)
        cout << i << '\n';

    return 0;
}




// 기능 하나 다하고 검산
// 일단 필요한거 다 써놓고 진짜 필요한 것들만 하기
// visited[x][y]
// visited[0][0] = 1
// 5분동안 이유를 생각하다 다른쪽에 문제가 있는 것은 아닌가 생각하기
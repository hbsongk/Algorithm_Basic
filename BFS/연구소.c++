#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;
int arr[10][10];
int brr[10][10];
int visited[70];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int _max = -1;
vector<pair<int,int>> safe;
vector<pair<int,int>> virus;
vector<int> v;
queue<pair<int,int>> q;
vector<vector<int>> safe_index;
void dfs(int start){
    if(v.size()==3){
        safe_index.push_back(v);
        return;
    }
    for (int i = start; i<safe.size();i++){
        if(visited[i]) continue;
        v.push_back(i);
        visited[i] = 1;
        dfs(i + 1);
        v.pop_back();
        visited[i] = 0;
    }
}
void bfs(){
    for (int i = 0; i < virus.size();i++){
        q.push({virus[i].first, virus[i].second});
    }
    int sum = 0;
    while(!q.empty()){
        pair<int, int> p = q.front();q.pop();
        for (int k = 0; k < 4;k++){
            int nx = p.first + dx[k];
            int ny = p.second + dy[k];

            if(nx<0 || ny<0 || nx>=n || ny>=m || brr[nx][ny]==1 || brr[nx][ny] == 2)
                continue;
            brr[nx][ny] = 2;
            q.push({nx, ny});
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(brr[i][j]==0)
                sum++;
        }
    }
    _max = max(sum, _max);
};
void calculation(vector<int>index){
    copy(&arr[0][0], &arr[0][0] + 100, &brr[0][0]);
    int sum = 0;
    for(int i : index){
        brr[safe[i].first][safe[i].second] = 1;
    }
    bfs();
}
int main(){
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> arr[i][j];
            if(arr[i][j]==0)safe.push_back({i, j});
            if(arr[i][j]==2)virus.push_back({i, j});
        }
    }
    dfs(0); // 안전지역중 3개 벽
    
    for(vector<int>v : safe_index){
        calculation(v);
    }

    cout << _max;
}
// 주의할점 visited
// 비슷한 변수 헷갈림
// 함수를 정확하게 사용했는지 안했는지 여부
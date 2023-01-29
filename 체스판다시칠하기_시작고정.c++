#include <iostream>
using namespace std;
int n, m;
int cnt;
char arr[54][54];
int visited[54][54];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void simulation(int x, int y){
    visited[x][y] = 1;
    if(arr[x][y]=='W'){
        for (int k = 0; k<4;k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx < 0 || ny < 0 || nx>=n || ny>=m)
                continue;
            if(visited[nx][ny])
                continue;
            if(arr[nx][ny]!='B'){
                arr[nx][ny] = 'B';
                cnt++;
            }
            simulation(nx, ny);
        }   
    }
    else if(arr[x][y]=='B'){
        for (int k = 0; k<4;k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(nx < 0 || ny < 0 || nx>=n || ny>=m)
                continue;
            if(visited[nx][ny])
                continue;
            if(arr[nx][ny]!='W'){
                arr[nx][ny] = 'W';
                cnt++;
            }
            visited[nx][ny] = 1;
            simulation(nx, ny);
        }
    }
}
int main(){
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j=0;j<m;j++){
            cin >> arr[i][j]; // 배열 안에 값 집어넣기
        }
    }
    simulation(0,0);
    cout << cnt;
    return 0; 
}
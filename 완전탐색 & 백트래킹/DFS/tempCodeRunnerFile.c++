#include <iostream>
#include <queue>
using namespace std;
int n;
int sum, sum2;
char arr[104][104];
char brr[104][104];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

void bfs(int x,int y){
    q.push({x, y});
    while(!q.empty()){
        pair<int, int> p = q.front();q.pop();
        for (int k = 0; k < 4;k++){
            int nx = p.first + dx[k];
            int ny = p.second + dy[k];
            
            if(nx<0 || ny<0 || nx>=n || ny>=n || brr[nx][ny]=='0') continue;
            if(brr[p.first][p.second]!= brr[nx][ny]) continue;
            // cout << brr[p.first][p.second] << brr[nx][ny] << endl;
            q.push({nx, ny});
        }
        brr[p.first][p.second] = '0';
    }
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    copy(&arr[0][0], &arr[0][0] + 10816, &brr[0][0]);

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(brr[i][j]=='0') continue;
            bfs(i, j);
            sum++;
        }
    }
    copy(&arr[0][0], &arr[0][0] + 10816, &brr[0][0]);

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(brr[i][j]=='R' || brr[i][j] == 'G')
                brr[i][j] = 'S';
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(brr[i][j]=='0') continue;
            bfs(i, j);
            sum2++;
        }
    }
    cout << sum << ' ' << sum2;

    return 0;
}

// 주의할점: visited = 1

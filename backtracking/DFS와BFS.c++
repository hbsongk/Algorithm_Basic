#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, v;
int x, y;
int arr[1004][1004];
queue<int> q;
vector<int> routes;
vector<int> routes2;

void dfs(int x){
    routes.push_back(x);
    for (int i = 1; i < n + 1;i++){
        if(find(routes.begin(),routes.end(),i)!=routes.end())
            continue;
        if(arr[x][i]){
            dfs(i);
        }
    }
    return;
}

void bfs(int x){
    q.push(x);
    while(routes2.size()!=routes.size()){
        int ele = q.front();
        q.pop();
        routes2.push_back(ele);
        for (int i = 1; i < n + 1;i++){
            if(find(routes2.begin(),routes2.end(),i)!=routes2.end())
                continue;
            if(arr[ele][i]){
                q.push(i);
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m >> v;
    for (int i = 0; i < m;i++){
        cin >> x >> y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    dfs(v);
    for(int r:routes){
        cout << r << ' ';
    }
    cout << "\n";
    bfs(v);
    for(int r:routes2){
        cout << r << ' ';
    }
    return 0;
}
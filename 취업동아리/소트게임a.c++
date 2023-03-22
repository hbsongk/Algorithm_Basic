#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;
int n, k;
string i_s;
map<string, int> visited;

int bfs(string s){
    queue<pair<string, int>> q;
    q.push({s, 0});
    sort(s.begin(), s.end());
    string tg = s;
    while(!q.empty()){
        string cur = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if(cur == tg) return cnt;   
        for (int i = 0; i <= n-k;i++){
            if(visited.count(cur))
                continue;
            
            string temp = cur.substr(i, k);
            reverse(temp.begin(), temp.end());
            q.push({cur.substr(0,i) + temp + cur.substr(i + k), cnt + 1});
        }
        visited[cur] = 1;
    }
    return -1;
}
int main(){
    cin >> n >> k;
    for (int i = 0; i < n;i++){
        char ele;
        cin >> ele;
        i_s += ele;
    }
    cout << bfs(i_s);

    return 0;
}
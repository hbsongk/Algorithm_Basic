#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;
int n, k;
string i_s;
map<string, bool> visited;

int bfs(string s){
    queue<pair<string, int>> q;
    q.push({s, 0});
    sort(s.begin(), s.end());
    string tg = s;
    while(!q.empty()){
        string ss = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if(ss == tg) return cnt;
        for (int i = 0; i <= n-k;i++){
            if(visited.count(ss)) continue;
            string s3 = ss.substr(i, k);
            reverse(s3.begin(), s3.end());
            string sf;
            sf = ss.substr(0,i) + s3 + ss.substr(i + k);
            q.push({sf, cnt + 1});
            visited[sf] = true;
        }
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
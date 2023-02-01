#include <iostream>
#include <vector>
using namespace std;
int n, sum, _min = 987654321;
int arr[24][24];
int visited[24];
int start, _end;
vector<int> v;
vector<int> v2;
void dfs(int s){
    if(v.size()==n/2){
        v2.clear();
        start = 0;
        _end = 0;
        for (int i = 0; i < n;i++){
            if(visited[i])continue;
            v2.push_back(i);
        }
        for (int i = 0; i < n / 2;i++){
            for (int j = i+1; j < n / 2;j++){
                start += arr[v[i]][v[j]] + arr[v[j]][v[i]];
                _end += arr[v2[i]][v2[j]] + arr[v2[j]][v2[i]];
            }
        }
        sum = abs(start - _end);
        _min = min(sum, _min);
        return;
    }
    for (int i = s; i < n;i++){
        if(visited[i])continue;
        v.push_back(i);
        visited[i] = 1;
        dfs(i+1);
        v.pop_back();
        visited[i] = 0;
    }
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    dfs(0);
    cout << _min;
}
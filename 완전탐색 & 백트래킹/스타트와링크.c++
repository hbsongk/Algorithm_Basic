#include <iostream>
#include <vector>
using namespace std;
int n, sum, _min;
int arr[24][24];
int visited[24];
int _start,_end;
vector<int> v;
vector<int> v2;
void dfs(){
    if(v.size()==n/2){
        v2.clear();
        for (int i = 0; i < n;i++){
            if(visited[i])
                continue;
            v2.push_back(i);
        }
        // for (int i = 0; i < n / 2; i++){
        //     cout << "v1 : " << v[i] << '\n';
        //     cout << "v2 : " << v2[i] << '\n';
        // }
        _start = 0;
        _end = 0;
        sum = 0;
        for (int i = 0; i < n/2;i++){
            for (int j = i+1; j < n/2;j++){
                cout << i << ' ' << j << endl;
                _start += arr[v[i]][v[j]] + arr[v[j]][v[i]];
                _end += arr[v2[i]][v2[j]] + arr[v2[j]][v2[i]];
            }
        }
        cout << "------" << endl;
        sum = abs(_start - _end);
        _min = min(sum, _min);
        return;
    }
    for (int i = 0; i < n;i++){
        if(visited[i])
            continue;
        v.push_back(i);
        visited[i] = 1;
        dfs();
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
    dfs();
    cout << _min;
    return 0;
}
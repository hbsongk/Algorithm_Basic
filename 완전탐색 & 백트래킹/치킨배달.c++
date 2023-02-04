#include <iostream>
#include <vector>
using namespace std;
int n, m;
int sum, total;
int _min = 987654321;
int __min = 987654321;
int arr[54][54];
vector<pair<int,int>> chicken;
vector<pair<int, int>> home;
vector<int> chicken_index;
vector<vector<int>> chicken_index_corps;

void dfs(int start){
    if(chicken_index.size()==m){
        chicken_index_corps.push_back(chicken_index);
        return;
    }
    for (int i = start; i<chicken.size();i++){ // m개 뽑기
        chicken_index.push_back(i);
        dfs(i + 1);
        chicken_index.pop_back();
    }
}
int main(){
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> arr[i][j];
            if(arr[i][j]==2) chicken.push_back({i, j});
            if(arr[i][j]==1) home.push_back({i, j});
        }
    }
    dfs(0);
    for(vector<int> c : chicken_index_corps){
        total = 0;
        for(pair<int,int>h : home){
            _min = 987654321;
            for(int idx : c){ // home 하나와 여러개 치킨집간의 치킨 거리
                sum = 0;
                sum += abs(h.first - chicken[idx].first)+abs(h.second - chicken[idx].second);
                _min = min(_min, sum);
            }
            total += _min;
        }
        __min = min(__min, total);
    }
    cout << __min << endl;

    return 0;
}

// 조심해야할 것
// visited[i]
// arr[i], arr[j]
// if문, return
// 하나 하고 확인하기
// for문 고정된 값이 더 위에 가 있어야 해.
#include <iostream>
#include <vector>
using namespace std;
int n, goal,sum,_max;
int arr[104];
int visited[104];
vector<int>v;

void dfs(){
    if(v.size()==3){
        sum = 0;
        for(int i : v){
            sum += i;
        }
        if(sum<=goal)
            _max = max(sum, _max);
        return;
    }
    for (int i = 0; i < n;i++){
        if(visited[i])
            continue;
        v.push_back(arr[i]);
        visited[i] = 1;
        dfs();
        v.pop_back();
        visited[i] = 0;
    }
}
int main(){
    cin >> n >> goal;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    dfs();
    cout << _max;
    return 0;
}
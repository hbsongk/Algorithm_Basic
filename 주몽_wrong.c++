#include <iostream>
#include <vector>
using namespace std;
int n, goal, sum, cnt;
int arr[15004];
vector<int> v;

void dfs(int start){
    if(v.size()==2){
        sum = 0;
        for(int i : v){
            sum += i;
        }
        if(sum==goal)
            cnt++;
    }
    for (int i = start; i < n;i++){
        v.push_back(arr[i]);
        dfs(i + 1);
        v.pop_back();
    }
}
int main(){
    cin >> n;
    cin >> goal;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    dfs(0);
    cout << cnt;
    return 0;
}
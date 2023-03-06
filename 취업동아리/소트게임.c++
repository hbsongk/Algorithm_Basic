#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int n, k;
int arr[9];
int n_arr[9];
int _min = 987654321;
void sort(int start){
    for (int i = 0; i < k/2;i++){
        int s = 0;
        s = n_arr[i+start];
        n_arr[i+start] = n_arr[k-1-i+start];
        n_arr[k - 1-i+start] = s;
    }
}
int equal(){
    for (int i = 0; i < n;i++){
        if(arr[i]==n_arr[i])
            continue;
        else
            return 0;
    }
    return 1;
}
int dfs(int level){
    if(equal()){
        _min = min(_min, level);
        return;
    }
    // 조건 return 할 조건, 
    for (int i = 0; i < n-k+1;i++){
        sort(i);
        dfs(level+1);
    }
}

int main(){
    cin >> n >> k;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    memcpy(&n_arr, &arr, sizeof(arr));
    dfs(0);

    return 0;
}
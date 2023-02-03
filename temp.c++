#include <iostream>
using namespace std;
typedef long long ll;
int n;
int _max = -100000000;
int _min = 100000000;
int _plus, _minus, _multiple, _divide;
int arr[14];
int cal[4];
int sum;
void dfs(int s, int depth){
    if(depth == n){
        if(_max < s)
            _max = s;
        if(_min > s)
            _min = s;
        return;
    }
    for (int jj = 0; jj < 4; jj++){
        if (cal[jj] && jj == 0)
        {
            cal[jj]--;
            dfs(s+arr[depth], depth + 1);
            cal[jj]++;
        }
        else if (cal[jj] && jj == 1)
        {
            cal[jj]--;
            dfs(s-arr[depth], depth + 1);
            cal[jj]++;
        }
        else if (cal[jj] && jj == 2)
        {
            cal[jj]--;
            dfs(s*arr[depth], depth + 1);
            cal[jj]++;

        }
        else if (cal[jj] && jj == 3)
        {
            cal[jj]--;
            dfs(s/arr[depth], depth + 1);
            cal[jj]++;
        }
    }
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < 4;i++){
        cin >> cal[i];
    }
    sum = arr[0];
    dfs(sum,1);

    cout << _max << '\n' << _min;
    return 0;
}
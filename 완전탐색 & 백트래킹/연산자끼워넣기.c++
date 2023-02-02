#include <iostream>
#include <vector>
using namespace std;
int n, _plus, _minus, _multiple, _divide;
int _min = 987654321;
int _max = -1;
vector<int> v;
int sum;

void dfs(int st, int depth){
    if(depth==n){
        _min = min(_min, sum);
        _max = max(_max, sum);
        return;
    }
    for (int i = st; i < n;i++){
        if(_plus){
            sum += v[i];
            _plus--;
            dfs(st+1, depth+1);
            _plus++;
            sum -= v [i];
        }
        if(_minus){
            sum -= v[i];
            _minus--;
            dfs(st+1, depth+1);
            _minus++;
            sum += v[i];
        }
        if(_multiple){
            sum *= v[i];
            _multiple--;
            dfs(st+1, depth+1);
            _multiple++;
            sum /= v[i];
        }
        if(_divide){
            sum /= v[i];
            _divide--;
            dfs(st+1, depth+1);
            _divide++;
            sum *= v[i];
        }
    }
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        int element;
        cin >> element;
        v.push_back(element);
    }
    cin >> _plus >> _minus >> _multiple >> _divide;
    sum = v[0];
    dfs(1, 1);
    cout << _max << "\n" << _min;
    return 0;
}
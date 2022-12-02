#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum, number, often, _max = -1, res;
vector<int> v;

int main(){
    for (int i = 0; i < 10;i++){
        cin >> number;
        sum += number;
        v.push_back(number);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size();i++){
        often = count(v.begin(), v.end(), v[i]);
        if(_max < often){
            _max = often;
            res = v[i];
        }
    }
    cout << sum/10 << endl << res;
}

// struct 방식으로 풀 수 있는 방법은 없을까?

// 새로운 방식은 없을까?
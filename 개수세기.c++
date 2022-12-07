#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int a;
int num;
vector<int> v;
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> a;
        v.push_back(a);
    }
    cin >> num;
    cout << count(v.begin(), v.end(), num);
    return 0;
}

// count말고 어떻게 풀지? 배열을 하나 선언해서, 해당 idx는 숫자로 하고 value는 often.
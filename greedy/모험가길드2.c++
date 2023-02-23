#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 포도 ->
int n, ele, nOg, made;
vector<int> v;
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> ele;
        v.push_back(ele);
    }
    sort(v.begin(), v.end());
    for(int i : v){
        nOg++;
        if(nOg>=i){
            made++;
            nOg = 0;
        }
    }
    cout << made;
    return 0;
}
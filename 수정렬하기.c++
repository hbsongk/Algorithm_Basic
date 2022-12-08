#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
int number;
vector<int> v;
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> number;
        v.emplace_back(number);
    }
    sort(v.begin(), v.end());
    for(int i : v){
        cout << i << endl;
    }

    return 0;
}

// void selectionSort(vector<int>v){
//     for (int i = 0; i < v.size() - 1;i++){
//         int tmp = i;
//         for (int j = i + 1; j < v.size();j++){
//             if(v[tmp]>=v[j])
//                 tmp = j;
//         }
//         swap(v[i], v[tmp]);
//     }
// }
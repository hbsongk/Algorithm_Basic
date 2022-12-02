#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int clown;
int sum;

int main(){
    for (int i = 0; i < 9;i++){
        cin >> clown;
        v.push_back(clown);
    }
    sort(v.begin(),v.end());
    do{
        sum = 0;
        for (int i = 0; i < 7;i++){
            sum += v[i];
            if(sum==100){
                for (int j = 0; j < 7;j++){
                    cout << v[j] << endl;
                }
                return 0;
            }
        }
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}

// next_permutation함수를 사용했을때 vector 내부의 변화 과정?
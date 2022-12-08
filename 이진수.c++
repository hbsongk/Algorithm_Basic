#include <iostream>
#include <stack>
#include <vector>

using namespace std;
int n;
int main(){
    int x;
    int cnt = 0;
    vector<int> v;
    int temp;

    cin >> n;
    while(n--){
        cin >> x;
        v.clear();
        while(x!=0){
            if(x%2==1)
                v.push_back(1);
            else
                v.push_back(0);
            x /= 2;
        }
        for (int i = 0; i < v.size();i++){
            if(v[i]==1)
                cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}
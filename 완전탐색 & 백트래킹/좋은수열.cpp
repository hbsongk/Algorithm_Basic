#include <iostream>
#include <string>
using namespace std;
string s;
bool flag;
int n;

void func(string st, int depth){
    if(flag) return;
    int len = st.size();
    for (int i = 1;i<=(len/2);i++){
        if(st.substr(len-i,i) == st.substr(len-2*i,i)){
            return;
        }
    }
    if (depth == n){
        flag = true;
        cout << st;
        return;
    }
    else{
        for (int i = 0; i < n;i++){
            func(st + "1", depth + 1);
            func(st + "2", depth + 1);
            func(st + "3", depth + 1);
        }
    }
}
int main(){
    cin >> n;
    func(s,0);
    return 0;
}
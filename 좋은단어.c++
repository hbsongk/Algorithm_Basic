#include <iostream>
#include <string>
#include <stack>
using namespace std;
int n, cnt;
string ss;


int good(string ss){
    stack<char> s;
    s.push('d');
    for(char c : ss){
        if(c==s.top()){
            s.pop();
            continue;
        }
        s.push(c);
    }
    if(s.size()==1)
        return 1;
    else
        return 0;
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> ss;
        cnt += good(ss);
    }
    cout << cnt;
    return 0;
}
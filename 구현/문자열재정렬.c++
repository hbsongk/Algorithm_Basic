//문재
//a영구, 오차, 숫더
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, sm;
string s;
vector<char> v;
void c(){
    for(char c : s){
        int ac = c - '0';
        if(ac>=1 && ac<=9){
            sm += ac;
        }
        else{
            v.push_back(c);
        }
    }
    sort(v.begin(), v.end());
}
void init(){
    cin >> s;
    c();
}

int main(){
    init();
    for(char c: v)
        cout << c;
    if(sm) cout << sm;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int n;
int pre;
int _min = 987654321;
string s;

vector<char> v;

int repeat(string s){

}
void dfs(){
    if(v.size()==n){
        s = "";
        for(char c : v){
            s += c;
        }
        if(repeat(s)){
            int num = stoi(s);
            _min = min(_min, num);
        }
        return;
    }
    for (int i = 1; i < 4;i++){
        if(pre==i)
            continue;
        pre = i;
        char a = i + '0';
        v.push_back(a);
        dfs();
        v.pop_back();
    }
}
int main(){
    cin >> n;
    dfs();
    cout << _min;
    return 0;
}
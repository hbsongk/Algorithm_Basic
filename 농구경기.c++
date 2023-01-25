#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;
int n;
int cnt;
string s;
string list;
vector<char> v2;
vector<char> save;
vector<char> v;

void count(){
    for (int i = 0; i < n;i++){
        if(find(save.begin(),save.end(),v[i])!=save.end())
            continue;
        if(count(v.begin(),v.end(),v[i])>=5){
            v2.push_back(v[i]);
        }
        save.push_back(v[i]);
    }
}

int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> s;
        v.push_back(s[0]); // 앞글자만 다 담음
    }
    count();
    sort(v2.begin(), v2.end());
    for(char c : v2)
        list += c;
    if(list=="")
        cout << "PREDAJA";
    cout << list;
    return 0;
}
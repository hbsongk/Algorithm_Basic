#include <iostream>
#include <string>
using namespace std;
string s;
int cnt = 0;
int main(){
    getline(cin,s);
    for (int i = 0; i < s.length();i++)
    {
        if(i==0 && s[i]==' ')continue; // 첫번째
        if(s[i] == ' ')cnt++;
    }
    if(s[s.length()-1]!=' ')
        cnt++;
    cout << cnt;

    return 0;
}
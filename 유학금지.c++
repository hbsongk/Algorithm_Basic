#include <iostream>
#include <string>
using namespace std;

string s;
string s1 = "CAMBRIDGE";
string s2;
int main(){
    cin >> s;
    for (char c : s){
        if(s1.find(c)==-1)
            s2 += c;
        else
            continue;
    }
    cout << s2;
    return 0;
}
#include <iostream>
using namespace std;
string s;

int main(){
    cin >> s;
    for(char c : s){
        if(c>='a' && c<='z')
            printf("%c", c - 32);
        if(c>='A' && c<='Z'){
            printf("%c", c + 32);
        }
    }
    return 0;
}
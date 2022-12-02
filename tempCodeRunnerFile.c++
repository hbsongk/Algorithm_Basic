#include <iostream>
using namespace std;
string str;
int main(){
    getline(cin, str);
    while(str != "\0"){
        cout << str;
    }
}
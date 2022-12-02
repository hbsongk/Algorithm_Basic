#include <iostream>
using namespace std;
string str;
int n = 100;
int main(){
    while(n--){
        getline(cin, str);
        cout << str << endl;
    }
    return 0;
}
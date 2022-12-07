#include <iostream>
using namespace std;
string str;
string temp;
string new_str;

int main(){
    getline(cin, str);
    for (int i = 0; i < str.length()+1;i++){
        if(str[i] == '-' || str[i]=='\0'){
            new_str += temp[0];
            temp = "";
            continue;
        }
        temp += str[i];
    }
    cout << new_str;

    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;
string str;
int main(){
    getline(cin, str);
    while(str !="END"){
        reverse(str.begin(),str.end());
        cout << str << endl;
        getline(cin, str);
    }
    return 0;
}
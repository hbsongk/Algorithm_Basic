#include <iostream>
using namespace std;
int t;
string s;
int main(){
    cin >> t;
    while(t--){
        cin >> s;
        cout << s.front() << s.back() << endl;
    }
    return 0;
}
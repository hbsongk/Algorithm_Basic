// 럭스 - X use everyday
// 123 402
// READY

// for, 3,
#include <iostream>
using namespace std;
int n;
void i(){
    cin >> n;
}
bool r(){
    string s = to_string(n);
    int s1 = 0;
    int s2 = 0;
    for (int i = 0; i < s.length();i++){
        if(i>=s.length()/2){
            int a1 = s[i] - '0';
            s1 += a1;
        }
        else{
            int a2 = s[i] - '0';
            s2 += a2;
        }
    }
    return s1 == s2;
}

int main(){
    i();
    if(r())
        cout << "LUCKY";
    else{
        cout << "READY";
    }

    return 0;
}
#include <iostream>
using namespace std;
int n;
string s;
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        if(i==0)
            getchar();
        getline(cin, s);
        for (int i = 0; i < s.size();i++){
            if (i == 0){
                if(s[i]>='a'&& s[i]<='z'){
                    putchar(s[i] - 32);
                }
                else{
                    putchar(s[i]);
                }
                continue;
            }
            putchar(s[i]);
        }
        printf("\n");
    }
    return 0;
}


// 4번만에 끝나는 이유?
// buffer에서 cin을 문자열을 받아올때?

// while(getchar() != '\n') -> 엔터키가 들어오기 전까지
#include <iostream>
using namespace std;
string s;
string str;
int i = 0;
int main(){
    cin >> s;
    for(char c : s){
        if(i==10){
            i = 0;
            printf("\n");
        }
        printf("%c", c);
        i++;
    }

    return 0;
}

// 글자를 다 입력받고, 끝가지 입력받을때까지 돌리는법?

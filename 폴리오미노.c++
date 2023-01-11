#include <iostream>
#include <string>
using namespace std;

string s;
string answer;
string a = "AAAA";
string b = "BB";
int cnt;

int main(){
    cin >> s;
    for(char c : s){
        if(c=='.' || c=='\0')
            if(cnt%4==0){
                for (int i = 0; i < cnt / 4;i++){
                    answer += a;
                } 
            }
            else if(cnt%2==0){
                for (int i = 0; i < cnt / 2;i++){
                    answer += b;
                }
            }
            else{
                cout << -1;
                return 0;
            }
            cnt = 0;
        cnt += 1;
    }
    cout << answer;
    return 0;
}



#include <iostream>
using namespace std;
int n;
string str;
int main(){
    cin >> n;
    while(n--){
        cin >> str;
        // getline(cin, str);
        for(char c : str){
            if(c>='A' && c<='Z'){
                printf("%c",c + 32);
            }
            else{
                cout << c;
            }
        }
        cout << endl;
    }
    return 0;
}
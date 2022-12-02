#include <iostream>
using namespace std;
string s;
int sum;
int main(){
    cin >> s;
    for(char c : s){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            sum++;
        }
    }
    cout << sum;
    return 0;
}
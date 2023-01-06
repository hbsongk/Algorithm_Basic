#include <iostream>
using namespace std;
int number, big, small, space;
string str;
int main(){
    getline(cin, str);
    while( str != "\0"){
        number = 0, big = 0, small = 0, space = 0;
        for(char c : str){
            if(c>=65 && c <=90){
                big++;
            }
            if(c)
            if(c>=97 && c<=122){
                small++;
            }
            if(c==32){
                space++;
            }
        }
        cout << small << ' ' << big << ' ' << ' '<< number << ' ' << space << '\n';
        getline(cin, str);
        
    }
    return 0;
}
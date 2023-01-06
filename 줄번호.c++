#include <iostream>
using namespace std;
int n;
string s;
int main(){
    cin >> n;
    getchar();
    for (int i = 0; i < n;i++){
        getline(cin, s);
        cout << i + 1 << ". " << s << endl;
    }

    return 0;
}
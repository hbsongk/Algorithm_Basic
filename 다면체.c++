#include <iostream>
using namespace std;
int n;
int v, e;

int main(){
    cin >> n;
    while(n--){
        cin >> v >> e;
        cout << e - v + 2 << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int t;
int candy, children;

int main(){
    cin >> t;
    while(t--){
        cin >> candy >> children;
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", candy / children, candy % children);
    }
    return 0;
}
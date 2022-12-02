#include <iostream>
using namespace std;
int n;
int a, b;
int main(){
    cin >> n;
    while(n--){
        scanf("%d,%d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
}
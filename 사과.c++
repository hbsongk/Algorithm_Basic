#include <iostream>
using namespace std;
int n;
int apple, student;
int remain;

int main(){
    cin >> n;
    while(n--){
        cin >> apple >> student;
        remain += student % apple;
    }
    cout << remain;
    
    return 0;
}
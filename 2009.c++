#include <iostream>
using namespace std;
int x, y;
int sum;
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[7] = {"Wednesday", "Thursday", "Friday", "Saturday","Sunday", "Monday", "Tuesday"};
int main(){
    cin >> y >> x;
    for (int i = 1; i < x;i++){
        sum += month[i];
    }
    sum += y;
    cout << day[sum % 7];
    return 0;
}
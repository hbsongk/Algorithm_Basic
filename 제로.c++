#include <iostream>
#include <stack>
using namespace std;
int n;
int score;
int sum;
stack<int> s;
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> score;
        if(!score){
            s.pop();
        }
        else{
            s.push(score);
        }
    }
    while(s.size()){
        sum += s.top();
        s.pop();
    }
    cout << sum;

    return 0;
}

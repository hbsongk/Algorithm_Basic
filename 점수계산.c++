#include <iostream>
using namespace std;
int n;
int point;
int sum;
int pre;
int multiple;

int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> point;
        if(point == 1){
            sum += point;
            if(pre==1){
                for (int i = 0; i < multiple;i++)
                    sum += 1;
            }
            pre = point;
            multiple += 1;
        }
        else{
            pre = 0;
            multiple = 0;
        }
    }
    cout << sum;
    return 0;
}
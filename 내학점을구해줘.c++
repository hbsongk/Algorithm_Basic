#include <iostream>
using namespace std;
int t;
int n;
float sum;
int cnt;

struct gpa{
    int cnt;
    float score;
};

struct gpa student;

int main(){
    cin >> t;
    while(t--){
        sum = 0;
        cnt = 0;
        cin >> n;
        for (int i = 0; i < n;i++){
            cin >> student.cnt >> student.score;
            cnt += student.cnt;
            sum += student.cnt * student.score;
        }
        printf("%d %.1f\n", cnt, sum/cnt);
    }
    return 0;
}
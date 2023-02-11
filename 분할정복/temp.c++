#include <iostream>
using namespace std;
int n;
int cnt;
int blue;
int paper[128][128];
void solve(int x, int y, int size){
    if(size==1){
        if(paper[i][j]==1){
        blue++;
        return;
        }
    }
    int flag = 0;
    for (int i = x; i < size;i++){
        for (int j = y; j < size;j++){
            if(paper[i][j]==1){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }
    }
    if(flag==1){
        blue++;
    }
    solve(x, y, size / 2);
    solve(x + size / 2, y, size / 2);
    solve(x, y + size / 2, size / 2);
    solve(x + size / 2, y + size / 2, size / 2);
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> paper[i][j];
        }
    }
    solve(0, 0, n);
    cout << blue;
    return 0;
}
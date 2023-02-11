#include <iostream>
using namespace std;
int n;
int blue, white;
int check;
int cnt;
int flag;
int paper[128][128];
void solve(int x, int y, int size){
    cnt++;
    if(size==1){
        if(paper[x][y]==1)
            blue++;
        else{
            white++;
        }
        return;
    }
    for (int i = x;i<x+size;i++){
        for (int j=y;j<y+size;j++){
            if(paper[i][j]==1)
                flag = 1;
            else{
                flag = 0;
                break;
            }     
        }
        if(flag==0)
            break;
    }
    if(flag){
        blue++;
        return;
    }
    for (int i = x;i<x+size;i++){
        for (int j=y;j<y+size;j++){
            if(paper[i][j]==0)
                flag = 1;
            else{
                flag = 0;
                break;
            }     
        }
        if(flag==0)
            break;
    }
    if(flag){
        white++;
        return;
    }
    solve(x,y, size/2);
    solve(x+size/2,y, size/2);
    solve(x,y+size/2, size/2);
    solve(x+size/2,y+size/2, size/2);
    
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> paper[i][j];
        }
    }
    solve(0, 0, n);
    cout << white << '\n' << blue;
    return 0;
}

// 그림 그리기
// 고정된 값, 고정되지 않은 값
// 범위 생각하기
#include <iostream>
#include <queue>
using namespace std;
int n, k;
queue<int> q;
int main(){
    cin >> n >> k;
    for (int i = 1; i <= n;i++){
        q.push(i);
    }
    int m = 1;
    printf("<");
    while(!q.empty()){
        int f = q.front();q.pop();
        if(m!=k){
            q.push(f);
            m++;
        }
        else{
            m = 1;
            if(!q.empty()){
                printf("%d, ", f);
            }
            else{
                printf("%d>", f);
            }
        }
    }
    return 0;
}
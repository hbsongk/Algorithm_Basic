#include <string>
#include <vector>
#include <iostream>
using namespace std;
int t = 4;
int sum;
int answer;
vector<char>v;
vector<int>number;

void dfs(){
    if(v.size()==number.size()){
        sum = 0;
        for(int i=0;i<number.size();i++){
            if(v[i]=='-') sum-=number[i];
            else if(v[i]=='+') sum+=number[i];
        }
        if(sum==t){
            answer++;
        }
        return;
    }
    for(int i=1;i<=2;i++){
        if(i==1){
            v.push_back('-');
            dfs();
            v.pop_back();
        }
        if(i==2){
            v.push_back('+');
            dfs();
            v.pop_back();
        }
    }
}

int main(){
    number.push_back(4);
    number.push_back(1);
    number.push_back(2);
    number.push_back(1);
    dfs();
    cout << answer;
}
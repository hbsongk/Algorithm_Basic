#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
// b, sd, hw min, b
// k b, hw time?
// b_o
// f t
// 
vector<string> t;
vector<pair<int,int>> v;
string c_t = "12:05";

int k = 10;
int result;
int s;
bool cp(int a, int b){
    if(abs(a-s)>abs(b-s))
        return abs(a - s) < abs(b - s);
    return abs(a - s) < abs(b - s);
}

int main(){
    t.push_back("09:05 10");
    t.push_back("12:20 5");
    t.push_back("13:25 6");
    t.push_back("14:24 5");
    int h = 0, m = 0;
    if(c_t[0]=='0'){
        h = (c_t[1]-'0') * 60;
    }
    else{
        h = ((c_t[0] + c_t[1]) - '0') * 60;
    }
    if(c_t[3]=='0'){
        m = (c_t[4] - '0');
    }
    else{
        m = (c_t[3] + c_t[4] - '0');
    }
    s = h + m;
    for(string s : t){ // to m
        int hr = 0;
        int mn = 0;
        int sm = 0;
        int nd = 0;
        if(s[0]=='0'){
            hr = stoi(s[1]) * 60;
        }
        else{
            hr = ((s[0] + s[1]) - '0') * 60;
        }
        if(s[3]=='0'){
            mn = (s[4] - '0');
        }
        else{
            mn = (s[3] + s[4] - '0');
        }
        if(s[6]=='0'){
            nd = s[7] - '0';
        }
        else{
            nd = (s[6] + s[7]) - '0';
        }
        sm = hr + mn;
        
        v.push_back({sm,nd});
        cout << sm << " " << nd << endl;
    }
    // sort(v.begin(), v.end(), cp);
    return 0;
}
// condi -> n_d


// m,

// 잘못한 부분: 1. c diff s 2. srt abs 3. oOr, str_i
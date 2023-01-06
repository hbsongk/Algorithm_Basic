#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int total,year,month,day;
map<char,int>t_map;
vector<int>priv;

vector<int>solution(string today, vector<string>terms, vector<string>privacies){
    vector<int>answer;
    //일 단위로 계산
    year = stoi(today.substr(0,4));
    month = stoi(today.substr(5,2));
    day = stoi(today.substr(8,2));
    
    total = year*12*28+(month-1)*28+day;
    
    // 약관 자르기
    for(int i=0;i<terms.size();i++){
        stringstream ss(terms[i]);
        char alpha;
        int beta;
        ss >> alpha >> beta;
        t_map[alpha] = beta;
    }
    // 프라이버시 날짜 계산
    for(int i=0;i<privacies.size();i++){
        int y = stoi(privacies[i].substr(0,4));
        int m = stoi(privacies[i].substr(5,2));
        int d = stoi(privacies[i].substr(8,2));
        
        char a = privacies[i].back();
        
        int t = y*12*28+(m-1)*28+d+(t_map[a]*28-1);
        priv.push_back(t);
    }
    for(int i=0;i<priv.size();i++){
        if(total>priv[i]){
            answer.push_back(i+1);
        }
    }
    
    return answer;
}
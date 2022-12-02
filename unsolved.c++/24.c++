#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
string starttime;
string endtime;

vector<int> split(string str, char Delimiter){
    istringstream iss(str);
    string buffer;

    vector<int> result;
    while(getline(iss, buffer, Delimiter)){
        result.push_back(atoi(buffer.c_str()));
    }

    return result;
}

int main(){
    cin >> starttime;
    cin >> endtime;
    vector<int> s = split(starttime, ':');
    vector<int> e = split(endtime, ':');

    for (int i = 2; i >= 0;i++){
        if(s[i] - e[i]>=0)
            s[i] - e[i];
        else{
            s[i - 1] -= 1;
            s[i] - e[i] + 60;
        }
    }
    
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, p;
struct stats{
    int price;
    string name;
};

vector<struct stats> v;
struct stats athlete;

bool compare(struct stats a, struct stats b){
    if(a.price < b.price)
        return a.price > b.price;
    else if(a.price == b.price)
        return a.price > b.price;
    else
    {
        return b.price < a.price;
    }
}
int main(){
    cin >> n;
    while(n--){
        cin >> p;
        v.clear();
        for (int i = 0; i < p;i++){
            cin >> athlete.price >> athlete.name;
            v.push_back({athlete.price, athlete.name});
        }
        sort(v.begin(), v.end(), compare);
        cout << v[0].name << endl;
    }
    return 0;
}
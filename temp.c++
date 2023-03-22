// 치거 =  하나의 집과 치킨집간의 거리중 가장 가까운 거리이다.

// 도치거 = 모든 치킨거리의 합이다
// m개의 치킨거리는 폐업을 한다
// 도치거 가장 작은 상황?
#include <iostream>
#include <vector>
using namespace std;
int n, m;
int min_chick = 987654321;
int chick_city[51][51];
vector<pair<int,int>> chick_city_home;
vector<pair<int,int>> chick_city_chicken_restaurant;
vector<int> temp;
vector<vector<int>> chick_city_chicken_restaurant_case_list;
void dfs(){
    if(temp.size()==m){
        for(int i: temp){
            chick_city_chicken_restaurant_case_list.push_back(temp);
        }
        return;
    }
    for (int i = 0; i < chick_city_chicken_restaurant.size();i++){
        temp.push_back(i);
        dfs();
        temp.pop_back();
    }
}

//0 1 2 3 1 3
// 폐업하는 치킨집에 따른 경우의 수
int main(){
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> chick_city[i][j];
            if(chick_city[i][j]==1){
                chick_city_home.push_back({i,j});
            }
            if(chick_city[i][j]==2){
                chick_city_chicken_restaurant.push_back({i,j});
            }
        }
    }

    for(vector<int> c : chick_city_chicken_restaurant_case_list){
        total = 0;
        for(pair<int,int>h : chick_city_home){
            _min = 987654321;
            for(int idx : c){
                sum = 0;
                sum += abs(h.first - chick_city_chicken_restaurant)
            }
        }
    }

    return 0;
}
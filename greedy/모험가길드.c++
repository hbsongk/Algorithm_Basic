// 모 길 n
// a b 동 한
#include <iostream>
#include <vector>
#include <utility>

using namespace std;
int n, q, ele;
int idx, gnum, jn;
int g1, g2;
int nOg[300004];
vector<int> v;
vector<pair<int,int>> jg;
int main(){
    cin >> n >> q;
    for (int i = 0; i < 4;i++){
        cin >> ele;
        v.push_back(ele);
    }
    for (int i = 0; i < q;i++){
        cin >> idx;
        switch(idx){
            case 1:
                cin >> gnum >> jn;
                nOg[gnum] += jn;
                break;

            case 2:
                cin >> gnum >> jn;
                nOg[gnum] -= jn;
                break;
            case 3:
                cin >> g1 >> g2;
                jg.push_back(make_pair(g1, g2));
                
                break;
            case 4:
                cin >> g1 >> g2;
                break;
        }
    }
    return 0;
}
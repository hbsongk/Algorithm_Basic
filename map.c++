#include <iostream>
#include <map>
using namespace std;
map<char, int> m;
int main(){
    m.insert(make_pair('a', 1));
    m.insert(make_pair('b', 2));
    m.insert(make_pair('c', 3));
    m.insert(make_pair('d', 4));
    m.insert(make_pair('e', 5));

    for (auto iter = m.begin(); iter!=m.end();iter++){
        cout << iter->first << endl;
    }
    return 0;
}
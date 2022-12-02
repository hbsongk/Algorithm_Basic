#include <iostream>
using namespace std;
int h1, m1, s1, h2, m2, s2, h, m, s;
int main(){
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);

    h = h2 - h1;
    m = m2 - m1;
    s = s2 - s1;

    if(s<0){
        m -= 1;
        s += 60;
    }
    if(m<0){
        h -= 1;
        m += 60;
    }
    if(h<0){
        h += 24;
    }
    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}
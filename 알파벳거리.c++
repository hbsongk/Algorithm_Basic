#include <iostream>
using namespace std;
string s1, s2;
int n;
int main(){
    cin >> n;
    while(n--){
        cin >> s1;
        cin >> s2;
        printf("Distances: ");
        for (int i = 0; i < s1.size();i++){
            int res = s2[i] - s1[i];
            if(res<0)
                res += 26;
            printf("%d ", res);
        }
        printf("\n");
    }
}
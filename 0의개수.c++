#include <iostream>
using namespace std;
int t;
int n, m;
int sum;

int main(){
    cin >> t;
    while(t--){
        sum = 0;
        cin >> n >> m;
        for (int i = n; i <= m;i++){
            string s = to_string(i);
            for (int j = 0; j <s.length();j++)
            {
                int a = s[j] - '0';
                if(a==0){
                    sum += 1;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
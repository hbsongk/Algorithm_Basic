#include <iostream>
using namespace std;
int n;
int a[51];
void sort(int a[], int n)
{
    int i, j, m, t;
    for (i = 0; i < n;i++){
        m = i;
        for (j = i; j < n;j++){
            if(a[m]>a[j]){
                m = j;
            }
        }
        t = a[i];
        a[i] = a[m];
        a[m] = t;
    }
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, n);
    cout << a[0] * a[n - 1];
    return 0;
}
#include <iostream>
using namespace std;
int n;
int price;
int service_number;
int number, service_price;
int sum;

int main(){
    cin >> n;
    while(n--){  
        cin >> price;
        cin >> service_number;
        sum = price;
        if(service_number){
            for (int i = 0; i < service_number;i++){
                cin >> number >> service_price;
                sum += number * service_price;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
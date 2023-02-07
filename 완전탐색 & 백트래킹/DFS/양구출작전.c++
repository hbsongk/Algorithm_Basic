#include <iostream>
#include <map>
using namespace std;
int n;
int arr[2][123450];
int brr[123460];
char animal;
int numberOfAnimal;
int islandNumber;
int main(){
    cin >> n;
    for (int i = 2; i <= n;i++){
        cin >> animal >> numberOfAnimal >> islandNumber;
        if(animal=='S'){
            arr[i][0] = numberOfAnimal;
        }
        else if(animal=='W'){
            arr[i][1] = numberOfAnimal;
        }
        brr[i] = islandNumber;
    }

    return 0;
}
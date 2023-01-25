#include <string>
#include <vector>
#include <iostream>
using namespace std;
int t = 4;
int sum;
int answer;
vector<char>v;
vector<int>number;
vector<int>numbers;

int main(){
    numbers.push_back(4);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(1);

	number.resize(numbers.size());
	copy(numbers.begin(), numbers.end(),number.begin());

	cout << number[0];
}
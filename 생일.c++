#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;
struct information{
    string name;
    // int name;
    int day, month, year;
};
vector<information> v;
bool compare(const struct information &x, const struct information &y){
	if (x.year < y.year)
		return true;
	else if (x.year == y.year) {
		if (x.month < y.month)
			return true;
		else if (x.month == y.month) {
			if (x.day < y.day)
				return true;
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        string name;
        int day, month, year;
        cin >> name >> day >> month >> year;
		v.push_back({name,day,month,year});
	}

    sort(v.begin(), v.end(), compare);
	cout << v[n - 1].name << endl << v[0].name;

	return 0;
}
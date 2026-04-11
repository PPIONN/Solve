#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int A = 5, B = 1, V = 6;
	cin >> A >>  B >> V ;
	int day = 0;


	day = (V - B-1) / (A - B)+1;
	cout << day;

	return 0;
}
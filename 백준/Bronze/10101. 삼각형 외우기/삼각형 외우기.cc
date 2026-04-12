#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int num1 = 0, num2 = 0, num3 = 0;
	cin >> num1 >> num2 >> num3;

	if ((num1 + num2 + num3) == 180) {
		if (num1 == 60 && num2 == 60 && num3 == 60) {
			cout << "Equilateral";
		}
		else if (num1 == num2 || num1 == num3 || num2 == num3) {
			cout << "Isosceles";
		}
		else {
			cout << "Scalene";
		}
	}
	else {
		cout << "Error";
	}

	return 0;
}
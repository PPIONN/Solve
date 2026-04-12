#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int num = 0;
	int x = 0, y = 0;
	int min_x = 10001, max_x = -10001;
	int min_y = 10001, max_y = -10001;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		if (min_x > x) { min_x = x; }
		if (max_x < x) { max_x = x; }
		if (min_y > y) { min_y = y; }
		if (max_y < y) { max_y = y; }
	}

	long long result = (long long)(max_x - min_x) * (max_y - min_y);

	cout << result;


	return 0;
}
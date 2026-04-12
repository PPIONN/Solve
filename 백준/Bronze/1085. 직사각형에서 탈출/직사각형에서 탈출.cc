#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<int>vtr;
	int x = 0 , y = 0;
	int x2 = 0, y2 = 0;
	cin >> x >> y >> x2 >> y2;

	int result = min({ x, y, x2 - x, y2 - y });
	cout << result;

	return 0;
}
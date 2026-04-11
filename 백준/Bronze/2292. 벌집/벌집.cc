#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int sum = 0;
	int range = 1;
	int layer = 1;

	cin >> sum;
	while (range < sum) {
		range = range + (6 * layer);
		layer++;

	}
	cout << layer << "\n";
	// 2~7,2; 8~19,3//20~37,4
	// ~5; 6~17; 18~35
	return 0;
}
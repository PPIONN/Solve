#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<int>vtr;
	int a = 0, b = 0;
	while (cin >> a >> b) {
		for (int i = 1; i <= a; i++) {
			if (a % i == 0) {
				vtr.push_back(i);
			}
		}
		if (vtr.size() >= b) {
			cout << vtr[b - 1] << "\n";
		}
		else {
			cout << 0 << "\n";
		}
		vtr.clear();
	}



	return 0;
}
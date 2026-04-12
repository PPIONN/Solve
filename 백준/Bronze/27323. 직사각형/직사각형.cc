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
	while (cin >> x >> y) {
		vtr.push_back(x * y);
	}

	for (const auto& i : vtr) {
		cout << i << "\n";
	}



	return 0;
}
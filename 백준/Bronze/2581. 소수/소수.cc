#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<int>vtr;
	int maxnum = 0, minnum = 0;
	cin >> minnum >> maxnum;

	for (int i = minnum; i <= maxnum; i++) {
		bool check = true;
		if (i == 1) continue;
		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				check = false;
				break;
			}
		}
		if (check == true) {
			vtr.push_back(i);
		}
	}

	int sum = accumulate(vtr.begin(),vtr.end(),0);

	if (vtr.empty()) {
		cout << -1;
		return 0;
	}
	cout << sum << "\n" << vtr[0];


	return 0;
}
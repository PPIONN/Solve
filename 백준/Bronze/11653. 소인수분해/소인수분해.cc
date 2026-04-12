#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<int>vtr;
	int num = 0;
	bool jump = true;
	cin >> num;
	if (num == 1) {
		return 0;
	}
	for (int i = num; i > 1; ) {
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) {
				if (jump == false) {
					cout << "\n";
				}
				if(jump != false)jump = false;
				cout << j;
				i /= j;
				break;
			}
		}
	}

	return 0;
}
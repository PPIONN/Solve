#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<int>vtr;
	int num = 0, targetindex =0;
	int checkindex = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> targetindex;
		vtr.push_back(targetindex);
	}

	for (const auto& i : vtr) {
		if (i != 1) {
			vector<int>check;
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					check.push_back(1);
				}
			}
			if (check.empty()) {
				++checkindex;
			}
		}
	}
	cout << checkindex;




	return 0;
}
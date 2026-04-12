#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	vector<int>vtr;
	int num = 0;
	while (cin >> num ) {
		if (num == -1) break;
		int result = 0;
		for (int i = 1; i < num; i++) {
			if (num % i == 0) {
				vtr.push_back(i);
			}
		}
		for (const auto& i : vtr) {
			result += i;
		}
		if (result == num) {
			cout << result << " = 1";
			for (int i : vtr) {
				if(i != 1) cout << " + " << i;
			}
			cout << "\n";
		}
		else {
			cout << num << " is NOT perfect." << "\n";
		}
		vtr.clear();
	}



	return 0;
}
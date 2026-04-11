#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int init = 0;
	int range = 1;
	cin >> init;

	while (init > range) {
		init = init - range;
		range++;
	}
	if (range % 2 == 1) {
		cout << range - init +1 << '/' << init;
	}
	else {
		cout << init << '/' << range - init +1;
	}

	return 0;
}
#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	vector<string>strstd;
	int a = 0, b = 0;
	while (cin >> a >> b) {
		if (a != b) {
			if (a > b) {
				if (a % b == 0) {
					strstd.push_back("multiple");
				}
				else {
					strstd.push_back("neither");
				}
			}
			if (a < b) {
				if (b % a == 0) {
					strstd.push_back("factor");
				}
				else {
					strstd.push_back("neither");
				}
			}
		}

	}
	for (string a : strstd) {
		cout << a << "\n";
	}

	return 0;
}
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

	for (int i = 2; i * i <= num;) {
		if (num % i == 0) {
			cout << i << "\n";
			num /= i;
		}
		else {
			i++;
		}
	}
	if(num > 1)cout << num << "\n";

	return 0;
}
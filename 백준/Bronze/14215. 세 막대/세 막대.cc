#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int num1 = 0, num2 = 0, num3 = 0;

	cin >> num1 >> num2 >> num3;
	vector<int>vtr;
	vtr.reserve(3);
	vtr.push_back(num1);
	vtr.push_back(num2);
	vtr.push_back(num3);
	sort(vtr.begin(), vtr.end());
	if (vtr[0] + vtr[1] <= vtr[2]) {
		vtr[2] = vtr[0] + vtr[1]-1;
	}
	int result = accumulate(vtr.begin(), vtr.end(),0);
	cout << result;
	return 0;
}
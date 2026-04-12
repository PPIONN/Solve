#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int num = 0;
	cin >> num;

	long long result = static_cast<long long>(num)*4;

	cout << result;
	


	return 0;
}
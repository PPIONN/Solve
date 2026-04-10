#include <iostream>
#include <vector>
using namespace std;
int main() {
	

	int j = 0;
	int init = 0;
	cin >> j;
	vector<int>inaxe;
	for (int i = 0; i < j; i++) {
		cin >> init;
		inaxe.push_back(init);
	}
	for (int inaxe : inaxe) {
		int Quarter = 0, Dime = 0, Nickel = 0, Penny = 0;
		int inaxes = 0;

		Quarter = inaxe / 25;
		inaxes = inaxe % 25;

		Dime = inaxes / 10;
		inaxes = inaxes % 10;

		Nickel = inaxes / 5;
		inaxes = inaxes % 5;

		Penny = inaxes / 1;
		inaxes = inaxes % 1;

		cout << Quarter << " " << Dime << " " << Nickel << " " << Penny << "\n";
	}
	return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int>vtr;
	int a = 0;
	int maxit = 0;
	int forcheck = 0;
	int check = 0;
	while (cin >> a) {
		vtr.push_back(a);
	}
	for (int i : vtr) {
		if (i > maxit) {
			maxit = i;
			forcheck++;
			check = forcheck;
			continue;
		}
		forcheck++;
	}

	cout << maxit << "\n" << check;


	return 0;
}
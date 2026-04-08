#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int>vtr;
	int a = 0;
	int maxit = 0;
	int forcheck = 0;
	int check = 0;
	while (cin >> a) {
		vtr.push_back(a);
	}
	for (int i : vtr) {
        forcheck++;
		if (i > maxit) {
			maxit = i;
			check = forcheck;
		}
	}

	cout << maxit << "\n" << check;


	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int anum1 = 0, anum2 = 0, anum3 = 0;
	int bnum1 = 0, bnum2 = 0, bnum3 = 0;

	cin >> anum1 >> bnum1 >> anum2 >> bnum2 >> anum3 >> bnum3;
	int aresult = anum1 ^ anum2 ^ anum3;
	int bresult = bnum1 ^ bnum2 ^ bnum3;
	cout << aresult << " " << bresult;




	return 0;
}
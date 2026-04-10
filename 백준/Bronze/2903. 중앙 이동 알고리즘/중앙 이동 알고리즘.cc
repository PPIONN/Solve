#include <iostream>
using namespace std;
int main() {

	long long a = 0;
	int cot = 0;
	cin >> cot;
	
	int byeon = (1 << cot) + 1;

	a = static_cast<long long>(byeon) * byeon;

		
	cout << a;

	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a,b = 0;
	cin >>a;

	vector<int> A;

	for(int i =0; i< a; i++){
		cin >> b;
		A.push_back(b);

	}

	sort(A.begin(),A.end());
	cout << A.front() << " "<< A.back();




	return 0;
}


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int s =0;
	cin >> s;
	double a,n = 0;

	double b[s];

	vector<double>c;

	for(int i =0; i < s; i++){
		cin >> a;
		c.push_back(a);
	}

	sort(c.begin(),c.end());

	for(int i =0; i < s; i++){
		 b[i] = c.at(i)/c.at(s-1)*100;
	}
	for(int i =0; i <s; i++){
		n += b[i];
	}
	cout << n/s;






	return 0;
}

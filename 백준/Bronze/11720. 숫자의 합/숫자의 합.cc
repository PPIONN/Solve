#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);


	int n = 0;
	int c = 0;

	cin  >> n;
	string a,b;
	cin >>a;
	for(int i = 0; i < n; i++){
		b = a[i];
		c += stoi(b);
	}
	cout << c;




}

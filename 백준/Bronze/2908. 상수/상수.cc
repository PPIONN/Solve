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

	int first,second;
	string a,b;
	char change;
	cin >> a>> b;

	change = a[0];
	a[0] = a[2];
	a[2] = change;

	change = b[0];
	b[0] = b[2];
	b[2] = change;

	first = stoi(a);
	second = stoi(b);

	if(first > second){
		cout << first;
	}
	else{
		cout << second;
	}


}

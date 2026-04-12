#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a,b = 0;

	while(!(cin >> a>> b).eof()){
		cout << a+b<<"\n";
	}


	return 0;
}
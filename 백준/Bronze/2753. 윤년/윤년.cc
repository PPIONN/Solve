#include <iostream>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int un = 0;
	bool check = false;
	cin >> un;
	if (un % 4 == 0) {
		check = true;
		if (un % 100 == 0) {
			check = false;
			if (un % 400 == 0) {
				check = true;
			}
		}
	}
	
	if (check == true) {
		cout << 1;
	}
	else if (check == false){
		cout << 0;
	}

	return 0;

}
